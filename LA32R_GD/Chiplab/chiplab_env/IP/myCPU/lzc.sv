`timescale 1ns/1ps
module lzc #(
  /// The width of the input vector.
  parameter int unsigned WIDTH = 2,
  /// Mode selection: 0 -> trailing zero, 1 -> leading zero
  parameter bit          MODE  = 1'b0,
  /// Dependent parameter. Do **not** change!
  ///
  /// Width of the output signal with the zero count.
  parameter int unsigned CNT_WIDTH = $clog2(WIDTH)
) (
  /// Input vector to be counted.
  input  logic [WIDTH-1:0]     in_i,
  /// Count of the leading / trailing zeros.
  output logic [CNT_WIDTH-1:0] cnt_o,
  /// Counter is empty: Asserted if all bits in in_i are zero.
  output logic                 empty_o
);

  if (WIDTH == 1) begin : gen_degenerate_lzc

    assign cnt_o[0] = !in_i[0];
    assign empty_o = !in_i[0];

  end else begin : gen_lzc

    localparam int unsigned NumLevels = $clog2(WIDTH);

    // pragma translate_off
    initial begin
      assert(WIDTH > 0) else $fatal(1, "input must be at least one bit wide");
    end
    // pragma translate_on

    logic [WIDTH-1:0][NumLevels-1:0] index_lut;
    logic [2**NumLevels-1:0] sel_nodes;
    logic [2**NumLevels-1:0][NumLevels-1:0] index_nodes;

    logic [WIDTH-1:0] in_tmp;

    // reverse vector if required
    always_comb begin : flip_vector
      for (int unsigned i = 0; i < WIDTH; i++) begin
        in_tmp[i] = (MODE) ? in_i[WIDTH-1-i] : in_i[i];
      end
    end

    for (genvar j = 0; unsigned'(j) < WIDTH; j++) begin : g_index_lut
      assign index_lut[j] = (NumLevels)'(unsigned'(j));
    end

    for (genvar level = 0; unsigned'(level) < NumLevels; level++) begin : g_levels
      if (unsigned'(level) == NumLevels - 1) begin : g_last_level
        for (genvar k = 0; k < 2 ** level; k++) begin : g_level
          // if two successive indices are still in the vector...
          if (unsigned'(k) * 2 < WIDTH - 1) begin : g_reduce
            assign sel_nodes[2 ** level - 1 + k] = in_tmp[k * 2] | in_tmp[k * 2 + 1];
            assign index_nodes[2 ** level - 1 + k] = (in_tmp[k * 2] == 1'b1)
              ? index_lut[k * 2] :
                index_lut[k * 2 + 1];
          end
          // if only the first index is still in the vector...
          if (unsigned'(k) * 2 == WIDTH - 1) begin : g_base
            assign sel_nodes[2 ** level - 1 + k] = in_tmp[k * 2];
            assign index_nodes[2 ** level - 1 + k] = index_lut[k * 2];
          end
          // if index is out of range
          if (unsigned'(k) * 2 > WIDTH - 1) begin : g_out_of_range
            assign sel_nodes[2 ** level - 1 + k] = 1'b0;
            assign index_nodes[2 ** level - 1 + k] = '0;
          end
        end
      end else begin : g_not_last_level
        for (genvar l = 0; l < 2 ** level; l++) begin : g_level
          assign sel_nodes[2 ** level - 1 + l] =
              sel_nodes[2 ** (level + 1) - 1 + l * 2] | sel_nodes[2 ** (level + 1) - 1 + l * 2 + 1];
          assign index_nodes[2 ** level - 1 + l] = (sel_nodes[2 ** (level + 1) - 1 + l * 2] == 1'b1)
            ? index_nodes[2 ** (level + 1) - 1 + l * 2] :
              index_nodes[2 ** (level + 1) - 1 + l * 2 + 1];
        end
      end
    end

    assign cnt_o = NumLevels > unsigned'(0) ? index_nodes[0] : {($clog2(WIDTH)) {1'b0}};
    assign empty_o = NumLevels > unsigned'(0) ? ~sel_nodes[0] : ~(|in_i);

  end : gen_lzc

endmodule : lzc
