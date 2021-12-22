#include <stdio.h>
#define SIZE 5
void rearrange(int arr[], int n)
{

	for (int i = 0; i < n; i++) 
    {
        arr[i] += (arr[arr[i]]%n)*n;
	}

	for (int i = 0; i < n; i++) 
    {
        arr[i] /= n;
	}
}

void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
	int arr[] = { 1, 3, 4, 2, 0 };
    printArray(arr, SIZE);
	rearrange(arr, SIZE);
    printArray(arr, SIZE);
	return 0;
}
