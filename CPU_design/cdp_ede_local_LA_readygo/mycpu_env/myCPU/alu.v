module alu (
    input  [13:0] alu_op,//alu_op是进行14种运算，然后每一位表示一个运算指令表示的运算
    input [31:0] alu_src1,  //alu端口操作数A
    input [31:0] alu_src2,  //alu端口操作数B
    output [31:0] alu_result  //alu运行结果
);

  //14位alu_op对应每位所执行的操作，是将所有实现的指令进行的操作分为14种，在id_stage文件中有声明
  wire op_add;  //作加法
  wire op_sub;  //作减法
  wire op_slt;  //作slt相关的运算 slt/slti
  wire op_sltu;  //作sltu相关的运算 slt/sltu
  wire op_and;  //作与运算
  wire op_nor;  //作或非运算~(|)
  wire op_or;  //作或运算
  wire op_xor;  //作异或运算
  wire op_sll;  //作逻辑左移
  wire op_srl;  //作逻辑右移
  wire op_sra;  //作算术右移
  wire op_lui;  //lui相关的运算
  wire op_andn;  //作&~运算
  wire op_orn;  //作|~运算 

  // control code decomposition 对alu_op解码
  assign op_add  = alu_op[0];
  assign op_sub  = alu_op[1];
  assign op_slt  = alu_op[2];
  assign op_sltu = alu_op[3];
  assign op_and  = alu_op[4];
  assign op_nor  = alu_op[5];
  assign op_or   = alu_op[6];
  assign op_xor  = alu_op[7];
  assign op_sll  = alu_op[8];
  assign op_srl  = alu_op[9];
  assign op_sra  = alu_op[10];
  assign op_lui  = alu_op[11];
  assign op_andn = alu_op[12];
  assign op_orn  = alu_op[13];

  //定义各种操作对应的结果，其中二进制sub也是按加法实现的，因此加减结果存放在一起
  wire [31:0] add_sub_result;
  wire [31:0] slt_result;
  wire [31:0] sltu_result;
  wire [31:0] and_result;
  wire [31:0] nor_result;
  wire [31:0] or_result;
  wire [31:0] xor_result;
  wire [31:0] lui_result;
  wire [31:0] sll_result;
  wire [63:0] sr64_result;
  wire [31:0] sr_result;
  wire [31:0] andn_result;
  wire [31:0] orn_result;


  // 32-bit adder 作加减法操作
  wire [31:0] adder_a;  //加法器的加数a
  wire [31:0] adder_b;  //加法器的加数b
  wire        adder_cin;  //加法器的低位进位
  wire [31:0] adder_result;  //加法结果
  wire        adder_cout;  //加法器的进位输出

  assign adder_a = alu_src1;  //加数a不用变化
  assign adder_b   = (op_sub | op_slt | op_sltu) ? ~alu_src2 : alu_src2;  //src1 - src2 rj-rk 加数b需要根据执行减法取反
  assign adder_cin = (op_sub | op_slt | op_sltu) ? 1'b1      : 1'b0;//因为b只是取反了，减法的话需要加1
  assign {adder_cout, adder_result} = adder_a + adder_b + adder_cin;  //赋值计算

  // ADD, SUB result
  assign add_sub_result = adder_result;  //赋值最终的结果

  // SLT result SLT结果如果src1小于src2那么置1,否则置0
  assign slt_result[31:1] = 31'b0;  //rj < rk 1
  assign slt_result[0] = (alu_src1[31] & ~alu_src2[31])  //src1是负数，src2是正数
      | ((alu_src1[31] ~^ alu_src2[31]) & adder_result[31]);//~^表示同或，src1和src2符号相同，src1<src2时，正数作差三负数，负数作差还是负数

  // SLTU result
  assign sltu_result[31:1] = 31'b0;
  assign sltu_result[0]    = ~adder_cout;//无符号数比较，如果src1>src2时，高位进位输出1

  // bitwise operation
  assign and_result = alu_src1 & alu_src2;  //与结果
  assign andn_result = alu_src1 & ~alu_src2;  //&~结果
  assign or_result = alu_src1 | alu_src2;  //或结果      
  assign orn_result = alu_src1 | ~alu_src2;  //|~结果
  assign nor_result = ~or_result;  //~(|)
  assign xor_result = alu_src1 ^ alu_src2;  //异或
  assign lui_result = alu_src2;  //12位立即数的符号扩展

  // SLL result 
  assign sll_result = alu_src1 << alu_src2[4:0];  //rj << i5

  // SRL, SRA result
  // {op_sra&alu_src1[31]}如果是算术右移，那么补全32个符号位；如果不是算术右移，那么补全32个0
  assign sr64_result = {{32{op_sra & alu_src1[31]}}, alu_src1[31:0]} >> alu_src2[4:0];  //rj >> i5 

  assign sr_result = sr64_result[31:0];  //再取低位

  // final result mux
  assign alu_result = ({32{op_add|op_sub}} & add_sub_result)//多路选择，这里直接是根据op进行32位1扩展，全f与结果
      | ({32{op_slt       }} & slt_result)
      | ({32{op_sltu      }} & sltu_result)
      | ({32{op_and       }} & and_result)
      | ({32{op_andn      }} & andn_result)
      | ({32{op_nor       }} & nor_result)
      | ({32{op_or        }} & or_result)
      | ({32{op_orn       }} & orn_result)
      | ({32{op_xor       }} & xor_result)
      | ({32{op_lui       }} & lui_result)
      | ({32{op_sll       }} & sll_result)
      | ({32{op_srl|op_sra}} & sr_result);

endmodule
