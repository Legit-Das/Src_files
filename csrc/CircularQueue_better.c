#include<stdio.h>
# define MAX 5
int cqueue_arr[MAX];
int front = -1;
int rear = -1;

int isEmpty()
{
    if(front == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if((front == 0 && rear == MAX-1) || (front == rear+1))
        return 1;
    else
        return 0;
}
void insert(int item)
{
    if(isFull() == 1)
    {
        printf("Queue Overflow n");
        return;
    }
    if(isEmpty() == 1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == MAX-1)
            rear = 0;
        else
            rear = rear+1;
    }
    cqueue_arr[rear] = item ;
}

void deletion()
{
    if(isEmpty() == 1)
    {
        printf("Queue Underflown");
        return ;
    }
    printf("Element deleted from queue is : %dn",cqueue_arr[front]);
    if(front == rear)
    {
        front = -1;
        rear=-1;
    }
    else
    {
        if(front == MAX-1)
            front = 0;
        else
            front = front+1;
    }
}

void display()
{
    int front_pos = front,rear_pos = rear;
    if(isEmpty() == 1)
    {
        printf("Queue is emptyn");
        return;
    }
    printf("Queue elements :n");
    if( front_pos <= rear_pos )
        while(front_pos <= rear_pos)
        {
        printf("%d ",cqueue_arr[front_pos]);
        front_pos++;
        }
    else
    {
        while(front_pos <= MAX-1)
        {
            printf("%d ",cqueue_arr[front_pos])
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
    }
    printf("n");
}

int main()
{
    int choice,item;
    do
    {
        printf("1.Insertn");
        printf("2.Deleten");
        printf("3.Displayn");
        printf("4.Quitn");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1 :
            printf("Input the element for insertion in queue : ");
            scanf("%d", &item);
            insert(item);
            break;
        case 2 :
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice");
        }
    }while(choice!=4);
    
    return 0;
}