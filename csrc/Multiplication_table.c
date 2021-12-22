/*Print 5*5 multiplication table*/
#include<stdio.h>

int main()
{
    int row, column, product[5][5];
    int j,k;
    printf("Multiplication Table: \n\n");
    //printf(" ");
    for(k=1;k<=5;k++)
        {
            printf(" %4d",k);
        }
    printf("\n");
    printf("_________________________\n");
    for(j=0;j<5;j++)
    {
        row=j+1;
        printf("%2d |",row);
        for(k=1;k<=5;k++)
        {
            column=k;
            product[j][k]=row*column;
            printf("%4d",product[j][k]);
        }
        printf("\n");
    }
    return 0;
}