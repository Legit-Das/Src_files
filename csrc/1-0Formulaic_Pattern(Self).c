#include<stdio.h>

int main()
{
    int i,j,s;
    for(i=1;i<=4;i++)
    {
        for(s=1;s<=4-i;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1)
                printf("1");
            else
                printf("0");
        }
        for(j=1;j<i;j++)
        {
            if(j!=(i-1))
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
    
    for(i=3;i>=1;i--)
    {
        for(s=3;s>=i;s--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            if(j==i)
                printf("1");
            else
                printf("0");
        }
        for(j=i-1;j>=1;j--)
        {
            if(j!=1)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
        
    }
    return 0;
}