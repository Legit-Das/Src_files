#include<stdio.h>
#include<conio.h>
#define size 5
int main()
{
    int queue[size],ch=1,front=0,rear=0,i,j=1,x=size;
    clrscr();
    
    printf("\nQueue using Array:");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                
                    printf("%d\n",queue[i]);
                    
            }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            
        }
    }
    getch();
    return 0;
}
