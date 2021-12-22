#include<stdio.h>

void arrMinMax(int *, int);

int main()
{
	int arr[50], n, i;

	printf("\nEnter the length of the array: ");
	scanf("%d", &n);

	printf("\nEnter %d elements in the array: ",n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	arrMinMax(arr, n);

	return 0;
}

void arrMinMax(int arr[], int size)
{
	int i, min, max;
	min = max = arr[0];

	for(i=0; i<size; i++)
	{
		while(min > arr[i])
			min = arr[i];

		while(max < arr[i])
			max = arr[i];

	}

	printf("\nMinimum element = %d\nMaximum element = %d\n",min,max);
}
