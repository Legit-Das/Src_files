#include<stdio.h>
#include<conio.h>

void printArray(int *, int);
void deleteElemnt(int *, int *, int);

int main()
{
    int arr[100], size, i, ind;
    clrscr();

    printf("\nEnter size of array(<=100): ");
    scanf("%d",&size);

    printf("\nEnter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray before deletion: ");
    printArray(arr, size);

    printf("\nEnter index of element to delete: ");
    scanf("%d", &ind);

    deleteElement(arr, &size, ind);
    
    printf("\n Array after deletion:");
    printArray(arr, size);
    
    getch();
    return 0;
}

void printArray(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void deleteElement(int arr[], int *size, int ind)
{
    int i;
    if(ind > *size-1)
    {
        printf("Invalid index!");
        return;
    }
    else
    {
        for(i=ind+1; i<=*size; i++)
        {
            arr[i-1] = arr[i];
        }
        --*size;
    }
}