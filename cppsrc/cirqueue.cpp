#include<iostream>
using namespace std;
#include<cstdlib>

class Queue
{
    private:
        int rear, front, size;
        int *circular_queue;
    public:
        Queue(int sz)
        {
           front = rear = -1;
           size = sz;
           circular_queue = new int[sz];
        }
        void enQueue(int elem);
        int deQueue();
        void displayQueue();
};

void Queue::enQueue(int elem)
{
    if ((front == 0 && rear == size-1) || (rear == (front-1)%(size-1)))
    {
        cout<<"\n#Queue is Full\n";
        return;
    }
    else if (front == -1)
    {
        front = rear = 0;
        circular_queue[rear] = elem;
    }
   else if (rear == size-1 && front != 0)
   {
        rear = 0;
        circular_queue[rear] = elem;
    }
    else
    {
        rear++;
        circular_queue[rear] = elem;
    }
}

int Queue::deQueue()
{
    if (front == -1)
    {
        cout<<"\n#Queue is Empty\n";
        return -1;
    }

    int data = circular_queue[front];
    circular_queue[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size-1)
        front = 0;
    else
        front++;

    return data;
}

void Queue::displayQueue()
{
    if(front == -1)
    {
        cout<<"\n#Queue is Empty\n"<<endl;
        return;
    }
    cout<<"\n#Circular Queue elements: ";
    if(rear >= front)
    {
        for (int i = rear; i >=front; i--)
            cout<<circular_queue[i]<<" ";
    }
    else
    {
        for (int i = size - 1; i>=front; i--)
            cout<<circular_queue[i]<<" ";

        for (int i = rear; i >= 0; i--)
            cout<<circular_queue[i]<<" ";
    }
}
 
int main()
{
    Queue cq(6);
    int choice, elem;
    do
    {
        cout<<"\n1. Enqueue"
            <<"\n2. Dequeue"
            <<"\n3. Display queue"
            <<"\n0. Exit"
            <<"\n#Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"\n#Enter the element to insert: ";
                cin>>elem;
                cq.enQueue(elem);
                break;
            case 2:
                cout<<"\n#Deleted element is "<<cq.deQueue()<<endl;
                break;
            case 3:
                cq.displayQueue();
                cout<<endl;
                break;
            case 0:
                exit(1);
                break;
            default:
                cout<<"\n#Invalid choice\n";
        }
    }
    while(choice != 0);
    return 0;
}
