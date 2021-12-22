//For 16 bit processors only
#include<stdio.h>

int main()
{
    int a = 10, b = 5;

    asm
    {
        mov ax,a
        mov bx,b
        add ax,bx
        mov c,ax
    }

    return 0;
}
