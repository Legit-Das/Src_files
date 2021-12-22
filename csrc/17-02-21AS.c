#include<stdio.h>

int main()
{
    int x=2,y,z;
    x *= y = z = 4;
    x = (y==z);
    printf("%d\n",x);
    return 0;
}
