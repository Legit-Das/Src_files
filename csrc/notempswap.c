#include<stdio.h>
int main()
{
    int i,j;
    printf("\nEnter i: ");
    scanf("%d",&i);
    printf("\nEnter j: ");
    scanf("%d",&j);

    i = i*j;
    j =i/j;
    i=i/j;

    printf("i = %d\nj = %d\n",i,j);
    return 0;
}
