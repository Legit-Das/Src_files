#include<stdio.h>
#include<math.h>

int main()
{
    unsigned int n,i,c=0,r,sum=0;
    printf("Enter number to check: ");
    scanf("%d",&n);
    for(i=n;i>0;++c)
    {
        i=i/10;
    }
    for(i=n;i>0;i/=10)
    {
        r=i%10;
        sum += pow(r,c);
    }
    if(sum==n)
    {
        printf("%d is an Armstrong number.",n);
    }
    else
    {
        printf("Keep checking");
    }
    return 0;
}