#include<stdio.h>
#include<conio.h>

void findMinMax(int *, int, int *, int *);
int main()
{
    int n, a[50], i, min, max;
    clrscr();
    
    printf("\nEnter array size(<=50): ");
    scanf("%d", &n);
    
    printf("\nEnter elements in Array: ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    findMinMax(a, n, &min, &max);
    printf("\nMin = %d at index %d",a[min], min);
    printf("\nMax = %d at index %d",a[max], max);
    
    getch();
    return 0;
}

void findMinMax(int arr[], int size, int *min, int *max)
{
    int i;
    *min = *max = 0;
    for(i=1; i<size; i++)
    {
        if(arr[*min] > arr[i])
            *min = i;
        else if(arr[*max] < arr[i])
            *max = i;
    }
}

    