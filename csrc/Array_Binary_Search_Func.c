#include<stdio.h>
#include<conio.h>

int binarySearch(int *, int, int, int);

int main()
{
    int arr[100], i, size, search, result;
    clrscr();
    
    printf("\nEnter size of array(<=100): ");
    scanf("%d", &size);
    
    printf("\nEnter %d elements in the array: ", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);
    
    printf("\nEnter the element to search: ");
    scanf("%d", &search);
    
    result = binarySearch(arr, 0, size-1, search);
    
    if(result != -1)
        printf("\n%d is found at index %d", search, result);
    else
        printf("\n%d is not found",search);

    getch();
    return 0;
}

int binarySearch(int arr[], int left, int right, int search)
{
    int middle;
    
    
    if(left <= right)
    {
        middle = (left+right)/2;
        
        if(arr[middle] == search)
            return middle;
        else if(search < arr[middle])
            return binarySearch(arr, left, middle-1, search);
        else
            return binarySearch(arr, middle+1, right, search);
    }
    else
        return -1;
}