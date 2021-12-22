#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    while(i<128)
        printf("%i = %c\n",i,i);
    return 0;
}
