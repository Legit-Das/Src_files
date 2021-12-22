#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, i, j, n, t;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    p = (int *)malloc(n*sizeof(int));

    printf("\nEnter %d integers: ", n);

    for(i = 0; i < n; i++)
        scanf("%d", p+i);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            if(*(p+i) < *(p+j))
            {
                t = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
        }
    }

    printf("\nSorted list: ");

    for(i = 0; i < n; i++)
        printf("%d ", *(p+i));

    return 0;
}