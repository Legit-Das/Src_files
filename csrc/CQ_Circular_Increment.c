/*C Program to implement Circular Queue using circular array*/
#include<stdio.h>

#define LENGTH 5
int front = -1, rear = -1;

void encq(int *, int);
void decq(int *);
void display(int *);

int main()
{
    int cq[LENGTH], item, choice;
    
    do
    {
        printf("\nCircular Queue Menu: ");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                printf("\n\nEnter the value to insert: ");
                scanf("%d", &item);
                
                encq(cq, item);
                break;
            case 2:
                decq(cq);
                break;
            case 3:
                display(cq);
                break;
            case 4:
                break;
            default:
                printf("\nWrong choice.");
        }
    }while(choice != 4);
    
    return 0;
    
}

void encq(int cq[], int item)
{
    int next;
    if(front == -1)
    {
        front = 0;
        rear = 0;
        cq[rear] = item;
    }
    else
    {
        next = rear + 1;
        next = next % LENGTH;
        if(next != front)
        {
            rear = next;
            cq[next] = item;
        }
        else
            printf("\nThe Circular Queue is full.\n");
    }
}

void decq(int cq[])
{
    int item;
    if(front == -1)
    {
        printf("\nCan't delete from empty queue.\n");
        return;
    }
    else
    {
        item = cq[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = front +1;
            front = (front % LENGTH);
        }
        printf("\nThe deleted item is %d.\n", item);
    }
}

void display(int cq[])
{
    int i = front, j = rear, k;
    
    if(front == -1)
    {
        printf("\nThe Circular Queue is empty.\n");
        return;
    }
    printf("\nQueue Elements: ");
    if(i <= j)
    {
        for(; i<= j; i++)
            printf("%d ", cq[i]);
    }
    else
    {
        for(k=0; k<= j; k++)
            printf("%d ", cq[k]);
        
        for(; i <= LENGTH -1; i++)
            printf("%d ", cq[i]);
    }
    printf("\n");
}