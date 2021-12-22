#include<stdio.h>

long long Ack(int,int);

int main()
{
    int m,n;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");
    printf("Ack(%d,%d) = %lld\n",m,n,Ack(m,n));
    return 0;
}

long long Ack(int i,int j)
{
    if(i==0)
    {
        return j+1;
    }
    else if(i>0 && j==0)
    {
        return Ack(i-1,1);
    }
    else
    {
        return Ack(i-1,Ack(i,j-1));
    }
}
