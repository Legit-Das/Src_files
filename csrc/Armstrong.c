#include<stdio.h>

int main()
{
    int x,r,s=0,i;
    printf("\nEnter 3 digit number: ");
    scanf("%d",&x);
    for(i=x;i>0;i=i/10)
    {
        r=i%10;
        s=s+r*r*r;
    }
    if(x==s)
        printf("%d is an Armstrong Number",x);
    else
        printf("%d is not an Armstrong Number",x);
    printf("\n");
    return 0;
}
