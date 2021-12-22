#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[100],i,j,val,n;
    clrscr();

    printf("\nEnter the number of elements: ");
    scanf("%d",&n);

    printf("\nEnter array elements:");
    for(i=0; i<n; ++i)
        scanf("%d",&arr[i]);

    printf("\nEnter element to search:");
    scanf("%d",&val);

    for(i=0; i<n; ++i)
        if(arr[i]==val)
            break;

    if(i<n)
    {
        printf("\n%d is found at index %d\n",val,i);
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
                printf("and index %d\n",j);
        }
    }
    else
        printf("\nElement not found");

    getch();
    return 0;
}