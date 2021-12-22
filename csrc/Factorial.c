#include<stdio.h>

int main()
{
    int i,n;
    long int fact;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error! Enter a positive integer.");
        return 0;
    }
    else if(n==0 || n==1)
    {
        fact = 1;
    }
    else
    {
        fact=1;
        for(i=1; i<=n; i++)
        {
            fact = fact*i;
        }
    }
    printf("%d! = %ld",n,fact);
    return 0;
}