#include<stdio.h>
#include<conio.h>

double inverseFactSum(int);

int main()
{
    int term, i;
    double sum;
    clrscr();
    
    printf("\nEnter the number of terms in the series: ");
    scanf("%d", &term);
    
    printf("\n");
    for(i=1; i<=term; i++)
    {
        if(i==1)
        {
            printf("1 ");
        }
        else
        {
            printf("+ 1/%d! ", i);
        }
    }
    
    sum = inverseFactSum(term);
    
    printf("= %.4lf", sum);
    
}

double inverseFactSum(int x)
{
    int i;
    long int fact=1;
    double sum = 0.0000;
    
    for(i=1; i<=x; i++)
    {
        fact = fact * i;
        sum = sum + (1/(double)(fact));
    }
    return sum;
}