#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, j, r, c;

    printf("\nEnter number of rows: ");
    scanf("%d", &r);
    printf("\nEnter number of columns: ");
    scanf("%d", &c);
    
    p = (int *)malloc(i*j*sizeof(int));

    printf("\nEnter integers into the matrix: ");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Element [%d,%d]: ", i,j);
            scanf("%d", p + i*c + j);
        }
    }
    
    printf("\nThe elements in %dx%d matrux are:\n", r,c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d\t", *(p + i*c + j));
        }
        printf("\n");
    }

    return 0;
}