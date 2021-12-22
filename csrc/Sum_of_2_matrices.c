#include<stdio.h>
#include<conio.h>

void input2DArray(int (*arr)[10], int, int);
void display2DArray(int (*arr)[10], int, int);
int main()
{
    int mat1[10][10], mat2[10][10], matsum[10][10], m,n, i,j;


    printf("\nEnter number of rows and columns respectively(both within 10): ");
    scanf("%d%d", &m, &n);
    
    printf("\nEnter %d elements in first array: \n", m*n);
    input2DArray(mat1, m, n);

    printf("\nEnter %d elements in second array: \n", m*n);
    input2DArray(mat2, m, n);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    display2DArray(mat1, m, n);
    printf("\n\n+\n\n");
    display2DArray(mat2, m, n);
    printf("\n\n=\n\n");
    display2DArray(matsum, m, n);

    getch();
    return 0;

}

void input2DArray(int (*arr)[10], int m, int n)
{
    int x,y;
    for(x=0; x<m; x++)
    {
        for(y=0; y<n; y++)
        {
            printf("index [%d, %d]: ",x,y);
            scanf("%d", &arr[x][y]);
            printf("\n");
        }
    }
}

void display2DArray(int (*arr)[10], int m, int n)
{
    int x,y;
    for(x=0; x<m; x++)
    {
        for(y=0; y<n; y++)
        {
            printf("%d\t", arr[x][y]);
        }
        printf("\n");
    }
}