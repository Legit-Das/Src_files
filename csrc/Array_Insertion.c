#include<stdio.h>

void printArray(int *, int);

int main()
{
    int arr[100];
    int n,i,ind,x;

    printf("\nEnter the number of elements: ");
    scanf("%d",&n);

    printf("\nEnter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before insertion: ");
    printArray(arr,n);

    printf("\nEnter index of new element: ");
    scanf("%d", &ind);

    if(ind > n)
    {
        printf("Invalid index!");
    }
    else
    {
        n++;
        for(i=n-1; i>=ind+1; i--)
        {
            arr[i] = arr[i-1];
        }
        printf("\nEnter the elemnt to be inserted: ");
        scanf("%d",&x);
        arr[ind] = x;
        printf("\n Array after insertion:");
        printArray(arr,n);
    }
    return 0;
}

void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
