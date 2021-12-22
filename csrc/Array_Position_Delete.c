#include<stdio.h>
#include<conio.h>

void PrintArr(int *, int);

int main()
{
    int arr[100],n,i,ind;
    clrscr();

    printf("\nEnter the number of elements: ");
    scanf("%d",&n);

    printf("\nEnter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion: ");
    PrintArr(arr, n);

    printf("\nEnter index of element to delete: ");
    scanf("%d", &ind);

    if(ind > n-1)
    {
        printf("Invalid index!");
    }
    else
    {
        for(i=ind+1; i<=n; i++)
        {
            arr[i-1] = arr[i];
        }
        n--;
        printf("\n Array after deletion:");
        PrintArr(arr, n);
    }
    getch();
    return 0;
}

void PrintArr(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
}