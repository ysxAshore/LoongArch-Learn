# MyCPU

## 目录

-   [功能部件的实现](#功能部件的实现)
    -   [ALU](#ALU)
    -   [RegFile](#RegFile)

## 功能部件的实现

#### ALU

```verilog
module alu(
  input  [13:0] alu_op,//alu_op是进行14种运算，然后每一位表示一个运算指令表示的运算
  input  [31:0] alu_src1,//alu端口操作数A
  input  [31:0] alu_src2,//alu端口操作数B
  output [31:0] alu_result//alu运行结果
);

//14位alu_op对应每位所执行的操作，是将所有实现的指令进行的操作分为14种，在id_stage文件中有声明
wire op_add;//作加法
wire op_sub;//作减法
wire op_slt;//作slt相关的运算 slt/slti
wire op_sltu;//作sltu相关的运算 slt/sltu
wire op_and;//作与运算
wire op_nor;//作或非运算~(|)
wire op_or;//作或运算
wire op_xor;//作异或运算
wire op_sll;//作逻辑左移
wire op_srl;//作逻辑右移
wire op_sra;//作算术右移
wire op_lui;//lui相关的运算
wire op_andn;//作&~运算
wire op_orn;//作|~运算 

// control code decomposition 对alu_op解码
assign op_add  = alu_op[ 0];
assign op_sub  = alu_op[ 1];
assign op_slt  = alu_op[ 2];
assign op_sltu = alu_op[ 3];
assign op_and  = alu_op[ 4];
assign op_nor  = alu_op[ 5];
assign op_or   = alu_op[ 6];
assign op_xor  = alu_op[ 7];
assign op_sll  = alu_op[ 8];
assign op_srl  = alu_op[ 9];
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
wire [31:0] adder_a;//加法器的加数a
wire [31:0] adder_b;//加法器的加数b
wire        adder_cin;//加法器的低位进位
wire [31:0] adder_result;//加法结果
wire        adder_cout;//加法器的进位输出

assign adder_a   = alu_src1; //加数a不用变化
assign adder_b   = (op_sub | op_slt | op_sltu) ? ~alu_src2 : alu_src2;  //src1 - src2 rj-rk 加数b需要根据执行减法取反
assign adder_cin = (op_sub | op_slt | op_sltu) ? 1'b1      : 1'b0;//因为b只是取反了，减法的话需要加1
assign {adder_cout, adder_result} = adder_a + adder_b + adder_cin;//赋值计算

// ADD, SUB result
assign add_sub_result = adder_result;//赋值最终的结果

// SLT result SLT结果如果src1小于src2那么置1,否则置0
assign slt_result[31:1] = 31'b0;   //rj < rk 1
assign slt_result[0]    = (alu_src1[31] & ~alu_src2[31])//src1是负数，src2是正数
                        | ((alu_src1[31] ~^ alu_src2[31]) & adder_result[31]);//~^表示同或，src1和src2符号相同，src1<src2时，正数作差三负数，负数作差还是负数

// SLTU result
assign sltu_result[31:1] = 31'b0;
assign sltu_result[0]    = ~adder_cout;//无符号数比较，如果src1>src2时，高位进位输出1

// bitwise operation
assign and_result = alu_src1 & alu_src2;//与结果
assign andn_result= alu_src1 & ~alu_src2;//&~结果
assign or_result  = alu_src1 | alu_src2;//或结果      
assign orn_result = alu_src1 | ~alu_src2;//|~结果
assign nor_result = ~or_result;//~(|)
assign xor_result = alu_src1 ^ alu_src2;//异或
assign lui_result = alu_src2;//12位立即数的符号扩展

// SLL result 
assign sll_result = alu_src1 << alu_src2[4:0];   //rj << i5

// SRL, SRA result
// {op_sra&alu_src1[31]}如果是算术右移，那么补全32个符号位；如果不是算术右移，那么补全32个0
assign sr64_result = {{32{op_sra & alu_src1[31]}}, alu_src1[31:0]} >> alu_src2[4:0]; //rj >> i5 

assign sr_result   = sr64_result[31:0];//再取低位

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


```

ALU模块的输入是`操作码alu_op`，`操作数alu_src1、alu_src2`，`运算结果alu_result`

alu\_op信号位宽是14位，每位代表一种对应的指令运算

具体包括`加法op_add、减法op_sub、有符号比较置位op_slt、无符号比较置位op_sltu、与运算op_and、非或运算op_nor、或运算op_or、异或运算op_xor、逻辑左移op_sll、逻辑右移op_srl、取高位立即数op_lui、与非op_andn、或非op_orn`14种操作

mycpu中的alu所采用的逻辑是计算出每一种操作对应的结果，然后再使用位操作码符号扩展为位全1的值`{32{op_操作}}`与各种操作对应的结果得到最终的结果

1.  加法和减法共用一种结果表示

    因为采用二进制补码表示有符号数的原因$-b=\bar b+1$，所以减法也可以表示成加法的形式：
    $$
    a-b=a+(-b)=a+\bar b+1，1可以作为低位进位输入
    $$
    因此加法和减法共同时用加法器adder来计算结果

    操作数a不用改变

    操作数b需要根据是否作减法来决定是否取反——op\_sub,op\_slt,op\_sltu执行减法

    进位输入也要根据是否作减法来决定是否为1——op\_sub,op\_slt,op\_sltu执行减法
    ```verilog
    assign adder_a   = alu_src1; //加数a不用变化
    assign adder_b   = (op_sub | op_slt | op_sltu) ? ~alu_src2 : alu_src2;  //src1 - src2 rj-rk 加数b需要根据执行减法取反
    assign adder_cin = (op_sub | op_slt | op_sltu) ? 1'b1      : 1'b0;//因为b只是取反了，减法的话需要加1
    assign {adder_cout, adder_result} = adder_a + adder_b + adder_cin;//赋值计算
    ```
2.  有符号数比较置位结果

    有符号操作数A小于有符号操作数B的情况是：
    1.  A是负数，B是正数
    2.  A、B同号且A-B的结果是负数

        若A和B都是正数，那么若A\<B时，A-B是负数

        若A和B都是负数，那么若A\<B时，A-B亦是负数
    ```verilog
    // SLT result SLT结果如果src1小于src2那么置1,否则置0
    assign slt_result[31:1] = 31'b0;   //rj < rk 1
    assign slt_result[0]    = (alu_src1[31] & ~alu_src2[31])//src1是负数，src2是正数
                            | ((alu_src1[31] ~^ alu_src2[31]) & adder_result[31]);//~^表示同或，src1和src2符号相同，src1<src2时，正数作差三负数，负数作差还是负数
    ```
3.  无符号数比较置位结果
    $$
    A-B=A+\bar B+1=A+2^n-1-B+1=A-B+2^n
    $$
    若A>B那么A-B不会产生进借位，而$+2^n$使得整个最终的式子会有一个进位

    因此若进位为1表示A>B，若进位为0表示A\<B
    ```verilog
    // SLTU result
    assign sltu_result[31:1] = 31'b0;
    assign sltu_result[0]    = ~adder_cout;//无符号数比较，如果src1>src2时，高位进位输出1

    ```
4.  位逻辑运算
    ```verilog
    // bitwise operation
    assign and_result = alu_src1 & alu_src2;//与结果
    assign andn_result= alu_src1 &~ alu_src2;//&~结果
    assign or_result  = alu_src1 | alu_src2;//或结果       
    assign orn_result = alu_src1 |~ alu_src2;//|~结果
    assign nor_result = ~or_result;//~(|)
    assign xor_result = alu_src1 ^ alu_src2;//异或
    assign lui_result = alu_src2;//高位20位立即数+12位低位0
    ```
5.  逻辑左移

    sll逻辑左移是根据操作数B的低五位对操作数A进行左移，低位补0
    ```verilog
    // SLL result 
    assign sll_result = alu_src1 << alu_src2[4:0];   //rj << i5
    ```
6.  逻辑右移+算术右移

    逻辑右移的高位补0，算术右移的高位补符号位

    那么补充的高位可以综合为`{是否是算术右移&操作数A的符号位}`，且因为最多移32位，所以补全64位数再右移，低32位结果即为最终结果
    ```verilog
    // SRL, SRA result
    // {op_sra&alu_src1[31]}如果是算术右移，那么补全32个符号位；如果不是算术右移，那么补全32个0
    assign sr64_result = {{32{op_sra & alu_src1[31]}}, alu_src1[31:0]} >> alu_src2[4:0]; //rj >> i5 

    assign sr_result   = sr64_result[31:0];//再取低位
    ```

最后再根据各个操作的32位扩展与对应的操作结果相与得到最终的alu运算结果

```verilog
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
```

#### RegFile
