#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p, i, n;

	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	
	p = (int *)malloc(n*sizeof(int));
	
	printf("\nEnter %d elements in the array: ",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",p+i);
	}

	printf("\nThe array in reverse order: ");
	for(i=n-1; i>=0; i--)
		printf("%d ",*p+i);
	printf("\n");
	return 0;
}
