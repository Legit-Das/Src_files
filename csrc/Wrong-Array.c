#include<stdio.h>
#include<conio.h>

int main()
{
    int n,l=10,i;
    printf("Type size: \n");
    scanf("%d",&n);
    int a[n];
    clrscr();
    for(i=0;i<=n;i++)
    {
        a[i]=l;
        l++;
    }
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
    return 0;
}