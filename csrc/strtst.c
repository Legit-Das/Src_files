#include<stdio.h>

int main()
{
    char str[50];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = ' ';
    str[4] = '\0';

    printf("%s",str);
    return 0;
}
