#include<stdio.h>
#include<conio.h>

void linearSearch(int *, int, int);

int main()
{
    int arr[100], size,search,i;
    clrscr();

    printf("\nEnter size of array(<=100): ");
    scanf("%d",&size);

    printf("\nEnter %d elements in the array: ", size);
    for(i=0; i<size; ++i)
        scanf("%d",&arr[i]);

    printf("\nEnter element to search:");
    scanf("%d",&search);

    linearSearch(arr, size, search);
    
    getch();
    return 0;
}

void linearSearch(int arr[], int size, int search)
{
    int j,k;
    for(j=0; j<size; ++j)
    {
        if(arr[j]==search)
            break;
    }

    if(j<size)
    {
        printf("\n%d is found at index %d\n",search,j);
        for(k=j+1; k<size; k++)
        {
            if(arr[j]==arr[k])
                printf("and index %d\n",k);
        }
    }
    else
        printf("\nElement not found");

}