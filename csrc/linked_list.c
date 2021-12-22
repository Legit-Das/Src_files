#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define MAX 10

struct
{
	int list[MAX];
	int element;
	int pos;
	int length; 
} ll;

int isFull();
int isEmpty();
static inline int menu();
void create();
void insertPos(int, int);
void deletePos(int);
void deleteVal(int);
void traverseDisp();

int main()
{
	int ch;
	int element;
	int pos;
	ll.length = 0;
	while (1)
	{
		ch = menu();
		switch (ch)
		{
		case 1:
			ll.length = 0;
			create();
			break;
		case 2:
			if (isFull() != 1)
			{
				printf("\nEnter new element: ");
				scanf("%d", &element);
				printf("\nEnter the position : ");
				scanf("%d", &pos);
				insertPos(element, pos);
			}
			else
			{
				printf("\nList is full. Cannot insert the element");
				printf("\n Press any key to continue...");
				getche();
			}
			break;
		case 3:
			if (isEmpty() != 1)
			{
				printf("\nEnter the position of element to be deleted : ");
				scanf("%d", &pos);
				deletePos(pos);
			}
			else
			{
				printf("\nList is empty");
				printf("\n Press any key to continue...");
				getch();
			}
			break;
		case 4:
			if(isEmpty() != 1)
			{
				printf("\nEnter the value of element to be deleted : ");
				scanf("%d", &element);
				deleteVal(element);
			}
			else
			{
				printf("\nList is empty");
				printf("\n Press any key to continue...");
				getch();
			}
			break;
		case 5:
			traverseDisp();
			break;
		case 6:
			printf("\nExit");
			exit(0);
			break;
		default:
			printf("\nInvalid choice!");
			printf("\n Press any key to continue...");
			getch();
		}
	}
	return 0;
}

int isFull()
{
	if (ll.length == MAX)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if (ll.length == 0)
		return 1;
	else
		return 0;
}

static inline int menu()
{
	int ch;
	printf("\n1. Create\n2. Insert\n3. Delete position\n4. Delete value\n5. Display\n6. Exit\n\n Enter your choice : ");
	scanf("%d", &ch);
	printf("\n");
	return ch;
}
void create()
{
	int element;
	int flag = 1;
	while ((flag == 1)&&(isFull() != 1))
	{
		printf("\nEnter element : ");
		scanf("%d", &element);
		ll.list[ll.length] = element;
		ll.length++;
		printf("\nPress '1' to insert another(anything else to stop creating): ");
		scanf("%d", &flag);
	}
	if(isFull() == 1)
			printf("List is full!");
}

void insertPos(int element, int pos)
{
	int i;
	if (pos == 0)
	{
		printf("\nCannot insert an element at 0th position");
		getch();
		return;
	}

	if (pos - 1 > ll.length)
	{
		printf("\nOnly %d elements exit. Cannot insert at %d position", ll.length, pos);
		printf("\n Press any key to continue...");
		getch();
		return;
	}
	else
	{
		for (i = ll.length; i >= pos - 1; i--)
		{
			ll.list[i + 1] = ll.list[i];
		}
		ll.list[pos - 1] = element;
		ll.length++;
	}
}
void deletePos(int pos)
{
	int i;
	if (pos == 0)
	{
		printf("\nCannot delete an element at 0th position");
		getch();
		return;
	}
	if (pos > ll.length)
	{
		printf("\n Only %d elements exit. Cannot delete element from %d position", ll.length, pos);
		printf("\n Press any key to continue...");
		getch();
		return;
	}
	else
	{
		for (i = pos - 1; i < ll.length; i++)
		{
			ll.list[i] = ll.list[i + 1];
		}
		ll.length--;
	}
}
void deleteVal(int element)
{
    int i,j;
    int flag = 1;

    for (i=0; i<ll.length; i++)
    {
        if(ll.list[i] == element)
        {
            printf ("\n%d is deleted from %d position",element, i+1);
            flag = 0;
            for(j=i; j<ll.length; j++)
            {
            	ll.list[j] = ll.list[j+1];
            }
            ll.length--;
            printf("\n Press any key to continue...");
            getch();
            break;
        }
    }
    if(flag == 1)
    {
        printf("Element not found.\n Press any key to continue...");
        getch();
    }
}

void traverseDisp()
{
	int i;
	printf("\n");
	for (i = 0; i < ll.length; i++)
		printf("Element %d : %d\n", i + 1, ll.list[i]);
	printf("\n");
}