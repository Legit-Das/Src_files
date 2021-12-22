#include<stdio.h>

int main()
{
    int a[50],j,k,size,c;
    
    printf("\nEnter size of the array(<=50) : ");
    scanf("%d", &size);
    printf("Enter the elements of the array: \n");
    for(j=0;j<size;j++)
    {
        scanf("%d",&a[j]);
    }
    printf("Elements entered: \n");
    for(j=0;j<size;j++)
    {
        printf("%d ",a[j]);
    }
    for(j=0; j<size; j++)
    {
        for(k=j+1; k<size; k++)
        {
            if(a[k] == a[j])
                c++;
                    break;
        }
    }
    printf("\n Thus, number of duplicate elements= %d\n", c);
    return 0;
}
