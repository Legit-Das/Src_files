#include<stdio.h>

double exponent(double,int);

int main()
{
    int i,n;
    double x,sum=1;
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("\nEnter the number of terms: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
            sum = sum - exponent(x,i)/i;
        else
            sum = sum + exponent(x,i)/i;
    }
    printf("Sum of the series upto %d term is %lf",n,sum);
    return 0;
}

double exponent(double x, int n)
{
    if(n==0)
        return 1;
    else if(n==1)
        return x;
    else
        return (x*exponent(x,n-1));
}
