#include<stdio.h>
int main()
{
    int arr[100],n,i,first,last,middle,val;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d ascendingly sorted elements: ", n);
    for (i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter value to find: ");
    scanf("%d", &val);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
        if (arr[middle] < val)
            first = middle + 1;
        else if (arr[middle] == val)
        {
            printf("\n%d first found at index %d", val, middle);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("\nNot found! %d isn't present in the list", val);
    printf("\n");
    return 0;
}
