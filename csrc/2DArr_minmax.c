#include<stdio.h>
#include<conio.h>

void findMinMax(int (*arr)[50], int, int, int *, int *, int *, int *);
int main()
{
    int r, c, arr[50][50], i, j, minrow, mincol, maxrow, maxcol;
    clrscr();

    printf("\nEnter the number of rows(<=50): ");
    scanf("%d", &r);
    printf("\nEnter the number of columns(<=50): ");
    scanf("%d", &c);
    printf("\nEnter elements in Array: ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\nEnter value of element arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    findMinMax(arr, r, c, &minrow, &mincol, &maxrow, &maxcol);
    printf("\nSmallest = %d at index %d,%d",arr[minrow][mincol], minrow, mincol);
    printf("\nLargest = %d at index %d,%d",arr[maxrow][maxcol], maxrow, maxcol);

    getch();
    return 0;
}

void findMinMax(int (*arr)[50], int r, int c, int *minrow, int *mincol, int *maxrow, int *maxcol)
{
    int i,j;
    *minrow = *mincol = *maxrow = *maxcol = 0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(arr[*minrow][*mincol] > arr[i][j])
            {
                *minrow = i;
                *mincol = j;
            }
            else if(arr[*maxrow][*maxcol] < arr[i][j])
            {
                *maxrow = i;
                *maxcol = j;
            }
        }
        /*if(arr[*min] > arr[i])
            *min = i;
        else if(arr[*max] < arr[i])
            *max = i;*/
    }
}