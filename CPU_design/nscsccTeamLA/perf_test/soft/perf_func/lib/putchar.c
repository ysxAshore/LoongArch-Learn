int putchar(int c)
{
tgt_putchar(c);
return 0;
}

void tgt_putchar(c)
{   //UART_ADDR
    asm(
        "li.w $r25, 0xbfafff10\n\t" 
        "st.b %0,$r25,0\n\t"        
        "nop\n\t"
        :
        :"r"(c)
        :"$r25");
}
