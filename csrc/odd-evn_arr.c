#include <stdio.h>

int main()
{
    int a[10], b[10], c[10],i,j=0,k=0,n;
    printf("Enter the number of elements to be stored in the array :");
    scanf("%d",&n);
    printf("Enter elements of the array :\n");
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if (a[i]%2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }

    printf("The Even elements are : ");
    for(i=0; i<j; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");
    printf("The Odd elements are :");
    for(i=0; i<k; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}