#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p, *q, *r, *i, s, r1, c1, r2, c2;
    
    printf("\nEnter the number of rows for first matrix: ");
    scanf("%d", r1);
    printf("\Enter the number of columns for first matrix: ");
    scanf("%d", c1);
    
    p = (int *)malloc(r1*c1*sizeof(int));
    
    printf("\nEnter %d integers in first matrix: ", r1*c1);
    for(i=p; i<p+(r1*c1); i++)
    {
        scanf("%d ", i);
    }
    
    printf("\nEnter the number of rows for second matrix: ");
    scanf("%d", r2);
    printf("\Enter the number of columns for second matrix: ");
    scanf("%d", c2);
    
    q = (int *)malloc(r2*c2*sizeof(int));
    
    printf("\nEnter %d integers in second matrix: ", r1*c1);
    for(i=q; i<q+(r1*c1); i++)
    {
        scanf("%d ", i);
    }
    
    printf("\nEnter 1 for mutiplying first matrix with second and 2 for vice versa: ");
    scanf("%d", %s);
    
    switch(i)
    {
        case 1:
            if(c1!=r2)
            {
                printf("\nMultiplication not possible.");
                return 0;
            }
            else
            {
                r = (int *)malloc(r1*c2*sizeof(int));
                
            }
    }
    
    return 0;
}