#include<stdio.h>

void revArr(int *, int );

int main()
{
	int arr[50];
	int n,i;

	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);

	printf("\nType %d elements into the array: ",n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);

	revArr(arr, n);
	printf("\nThe reversed array is: ");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

void revArr(int arr[], int size)
{
	int i, temp;
	int start = 0, end = size-1;
	while(start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
