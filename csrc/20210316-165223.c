#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, *q, *r, *i, *j , *s, r1, c1, r2, c2;

    printf("\nEnter the number of rows for first matrix: ");
    scanf("%d", r1);
    printf("\Enter the number of columns for first matrix: ");
    scanf("%d", c1);


    printf("\nEnter the number of rows for second matrix: ");
    scanf("%d", r2);
    printf("\Enter the number of columns for second matrix: ");
    scanf("%d", c2);

    if(c1 != r1)
    {
        printf("\nMultiplication not possible!");
    }
    else
    {
        p = (int *)malloc(r1*c1*sizeof(int));
        printf("\nEnter %d integers in first matrix: ", r1*c1);
        for(i=p; i<p+(r1*c1); i++)
        {
            scanf("%d ", i);
        }

        q = (int *)malloc(r2*c2*sizeof(int));
        printf("\nEnter %d integers in second matrix: ", r1*c1);
        for(i=q; i<q+(r1*c1); i++)
        {
            scanf("%d ", i);
        }
        
        r = (int *)malloc(r1*c2*sizeof(int));
        s=r;
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                s = (
            }
        }
        
    }


    return 0;
}