#include <stdio.h>
#include <stdlib.h>

void displayMat(int *, int, int);

int main()
{
    int *p, *q, *m, i, j, k, r1, c1, r2, c2;

    printf("\nFOR FIRST MATRIX:");
    printf("\nEnter number of rows: ");
    scanf("%d", &r1);
    printf("\nEnter number of columns: ");
    scanf("%d", &c1);

    p = (int *)malloc(r1*c1*sizeof(int));

    printf("\nEnter integers into the matrix:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("Element [%d,%d]: ", i,j);
            scanf("%d", p + i*c1 + j);
            printf("\n");
        }
    }

    printf("\nFOR SECOND MATRIX: ");
    printf("\nEnter number of rows: ");
    scanf("%d", &r2);
    printf("\nEnter number of columns: ");
    scanf("%d", &c2);
    
    q = (int *)malloc(r2*c2*sizeof(int));

    printf("\nEnter integers into the matrix:\n");

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("Element [%d,%d]: ", i,j);
            scanf("%d", q + i*c2 + j);
            printf("\n");
        }
    }
    
    if(c1 != r2)
        printf("\nMatrix multiplication not possible: ");
        
    else
    {
        m = (int *)malloc(r1*c2*sizeof(int));
        *m = 0;
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                
                for(k = 0; k<c1; k++)
                {
                    *(m + i*c2 + j) += (*(p + i*c1 + k)) * (*(q + k*c2 + j));
                }
            }
        }
    }
    printf("\n");
    displayMat(p, r1, c1);
    printf("\n\n*\n\n");
    displayMat(q, r2, c2);
    printf("\n\n=\n\n");
    displayMat(m, r1, c2);
    
    return 0;
}

void displayMat(int *mat, int r, int c)
{
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", *(mat + i*c + j));
        }
        printf("\n");
    }
}