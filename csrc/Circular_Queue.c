#include<stdio.h>
#include<conio.h>
#define size 5

int cqueue_arr[size];
int front = -1;
int rear = -1;

void insert(int);
void del();
void display();

/*Begin of main*/
int main()
{
    int choice,item;
    clrscr();
    do
    {
        printf("\nCircular Queue Menu:");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Quit\n");

        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1 :
            printf("\nInput the element for insertion in queue : ");
            scanf("%d", &item);

            insert(item);
            break;
        case 2 :
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("\nWrong choice\n");
        }
    } while(choice!=4);

    getch();
    return 0;
}
/*End of main*/
/*Begin of insert*/
void insert(int item)
{
    if((front == 0 && rear == size-1) || (front == rear+1))
    {
        printf("\nQueue Overflow");
        return;
    }
    if (front == -1)  /*If queue is empty */
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == size-1)    /*rear is at last position of queue */
            rear = 0;
        else
            rear = rear+1;
    }
    cqueue_arr[rear] = item ;
}
/*End of insert*/
/*Begin of del*/
void del()
{
    if (front == -1)
    {
        printf("\nQueue Underflow");
        return ;
    }
    printf("\nElement deleted from queue is : %d",cqueue_arr[front]);
    if(front == rear) /* queue has only one element */
    {
        front = -1;
        rear=-1;
    }
    else
    {
        if(front == size-1)
            front = 0;
        else
            front = front+1;
    }
}
/*End of del() */
/*Begin of display*/
void display()
{
    int front_pos = front,rear_pos = rear;
    if(front == -1)
    {
        printf("\nQueue is empty");
        return;
    }
    printf("\nQueue elements :");
    if( front_pos <= rear_pos )
        while(front_pos <= rear_pos)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
    else
    {
        while(front_pos <= size-1)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
/*End of display*/

