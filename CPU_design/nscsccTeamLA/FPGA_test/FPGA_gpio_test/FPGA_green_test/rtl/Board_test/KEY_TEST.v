module KEY_TEST(
    input clk,
    input resetn,
    output [3 :0] key_col,
    input  [3 :0] key_row,
    output [15:0] information
    );
//------------------------------{btn key}begin---------------------------//
//btn key data
reg [15:0] btn_key_r;

//state machine
reg  [2:0] state;
wire [2:0] next_state;

//eliminate jitter
reg        key_flag;
reg [19:0] key_count;
reg [3:0] state_count;
wire key_start = (state==3'b000) && !(&key_row);
wire key_end   = (state==3'b111) &&  (&key_row);
wire key_sample= key_count[19];
always @(posedge clk)
begin
    if(!resetn)
    begin
        key_flag <= 1'd0;
    end
    else if (key_sample && state_count[3]) 
    begin
        key_flag <= 1'b0;
    end
    else if( key_start || key_end )
    begin
        key_flag <= 1'b1;
    end

    if(!resetn || !key_flag)
    begin
        key_count <= 20'd0;
    end
    else
    begin
        key_count <= key_count + 1'b1;
    end
end

always @(posedge clk)
begin
    if(!resetn || state_count[3])
    begin
        state_count <= 4'd0;
    end
    else
    begin
        state_count <= state_count + 1'b1;
    end
end

always @(posedge clk)
begin
    if(!resetn)
    begin
        state <= 3'b000;
    end
    else if (state_count[3])
    begin
        state <= next_state;
    end
end

assign next_state = (state == 3'b000) ? ( (key_sample && !(&key_row)) ? 3'b001 : 3'b000 ) :
                    (state == 3'b001) ? (                !(&key_row)  ? 3'b111 : 3'b010 ) :
                    (state == 3'b010) ? (                !(&key_row)  ? 3'b111 : 3'b011 ) :
                    (state == 3'b011) ? (                !(&key_row)  ? 3'b111 : 3'b100 ) :
                    (state == 3'b100) ? (                !(&key_row)  ? 3'b111 : 3'b000 ) :
                    (state == 3'b111) ? ( (key_sample &&  (&key_row)) ? 3'b000 : 3'b111 ) :
                                                                                    3'b000;
assign key_col = (state == 3'b000) ? 4'b0000:
                 (state == 3'b001) ? 4'b1110:
                 (state == 3'b010) ? 4'b1101:
                 (state == 3'b011) ? 4'b1011:
                 (state == 3'b100) ? 4'b0111:
                                     4'b0000;
wire [15:0] btn_key_tmp;
always @(posedge clk) begin
    if(!resetn) begin
        btn_key_r   <= 16'd0;
    end
    else if(next_state==3'b000)
    begin
        btn_key_r   <=16'd0;
    end
    else if(next_state == 3'b111 && state != 3'b111) begin
        btn_key_r   <= btn_key_tmp;
    end
end

assign btn_key_tmp = (state == 3'b001)&(key_row == 4'b1110) ? 16'h0001:
                     (state == 3'b001)&(key_row == 4'b1101) ? 16'h0010:
                     (state == 3'b001)&(key_row == 4'b1011) ? 16'h0100:
                     (state == 3'b001)&(key_row == 4'b0111) ? 16'h1000:
                     (state == 3'b010)&(key_row == 4'b1110) ? 16'h0002:
                     (state == 3'b010)&(key_row == 4'b1101) ? 16'h0020:
                     (state == 3'b010)&(key_row == 4'b1011) ? 16'h0200:
                     (state == 3'b010)&(key_row == 4'b0111) ? 16'h2000:
                     (state == 3'b011)&(key_row == 4'b1110) ? 16'h0004:
                     (state == 3'b011)&(key_row == 4'b1101) ? 16'h0040:
                     (state == 3'b011)&(key_row == 4'b1011) ? 16'h0400:
                     (state == 3'b011)&(key_row == 4'b0111) ? 16'h4000:
                     (state == 3'b100)&(key_row == 4'b1110) ? 16'h0008:
                     (state == 3'b100)&(key_row == 4'b1101) ? 16'h0080:
                     (state == 3'b100)&(key_row == 4'b1011) ? 16'h0800:
                     (state == 3'b100)&(key_row == 4'b0111) ? 16'h8000:16'h0000;
//-------------------------------{btn key}end----------------------------//
assign information = ~btn_key_r;
endmodule
