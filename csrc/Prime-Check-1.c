#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        printf("Yes");
    else
        printf("no");
    return 0;
}