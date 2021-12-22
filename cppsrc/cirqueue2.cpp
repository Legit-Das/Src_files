#include<iostream>
using namespace std;

class CQueue
{
  private:
      int *array,Size;
      int front,back;
  public:
  CQueue(int size)
  {
    Size=size;
    array= new int[size];
    front = back = –1;
  }
  int isFull();
  int isEmpty();
  void enqueue(int value);
  int dequeue();
  void Show();
};


int CQueue::isFull()
{
    if((front==back+1)||(front == 0 &&back== Size– 1))
        return 1;
    return 0;
}
int CQueue::isEmpty()
{
    if (front == –1)
        return 1;
    return 0;
}

void CQueue::enqueue(int value)
{
    cout<<“Pushing the value: “<<value<<endl;
    if (isFull())
        cout<<“Can not push “<<value<<“, The Circular Queue is Full.”<<endl;
    else
    {
        if (front == –1) front = 0;
        back = (back + 1) % Size;
        array[back] = value;
  }
}

int CQueue::dequeue()
{
  int element;
  if (isEmpty())
  {
        cout<<“The Circular Queue is empty.”<<endl;
        return –1;
  }
    element = array[front];
    if (front ==back)
    {
        front = –1;
        back = –1;
    }

    else
    {
        front = (front + 1) % Size;
    }
    cout<<“Popping out the value : “<<element<<endl;
    return element;
}

void CQueue::Show()
{
    int i;
    if (isEmpty()) cout<<“The Circular Queue is empty.”<<endl;
    else
    {
        cout<<“The Circular Queue is :”<<endl;
        for (i=front; i!=back;i= (i+1)%Size)
            cout<<array[i]<<” “;
    cout<<array[i]<<endl;
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
                cq.enqueue(elem);
                break;
            case 2:
                cout<<"\n#Deleted element is "<<cq.dequeue()<<endl;
                break;
            case 3:
                cq.Show();
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
