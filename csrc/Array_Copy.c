#include<stdio.h>

int main()
{
    int p[10]={12,13,125,126,234,235,347,348,478,479};
    int o[10],j;
    for(j=0;j<10;j++)
    {
        o[j] = p[j];
    }
    for(j=0;j<10;j++)
    {
        printf("%d ",o[j]);
    }
}