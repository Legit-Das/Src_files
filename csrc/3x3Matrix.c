#include<stdio.h>

int main()
{
    int matrix[3][3], i, j;
    
    printf("\nEnter the elements in the 3x3 matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\nmatrix[%d][%d] : ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nThe matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}
