#include<stdio.h>

long fibX(int);
int main()
{
    int i, n;
    long sum = 1;

    printf("\nEnter the number of terms: ");
    scanf_s("%d", &n);

    printf("\n1 ");
    for(i=1; i<n; i++)
    {
        if(i%2 != 0)
        {
            printf("- %ld ", fibX(i));
            sum -= fibX(i);
        }
        else
        {
            printf("+ %ld ", fibX(i));
            sum += fibX(i);
        }
    }
    printf("= %ld\n", sum);

    return 0;
}

long fibX(int i)
{
    long a=0, b=1,c;
    int j;

    for(j=1; j<=i; j++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}
    
