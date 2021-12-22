#include<stdio.h>

int main()
{
    int i,n,c=0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==1)
        printf("Fuck you!");
    else
        {
            if(c==2)
                printf("Yes");
            else
                printf("No");
        }
    return 0;
}