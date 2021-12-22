import java.io.*;
class Queue
{
    int maxsize;
    int[] quearr;
    int rear, front;
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    Queue(int s)
    {
        maxsize = s;
        rear = 0;
        front = 0;
    }

    public void enque()
    {
        if(rear == maxsize)
        {
            System.out.println("Queue reached max!");
        }
        else
        {
            System.out.println("Enter value to be inserted: ");
            string s = br.readLine();
            float f = Float.valueof(s);
            int i = (int)f;

        }
    }

    public void deque()
    {
        if(front == rear)
            System.out.println("Queue is empty!")
        else
        {
                front++;
        }
    }

    public void display()
    {
        System.out.println("Queue size: "+(rear-front));
        for(int i = front; i <rear; i++)
        {
            System.out.println()
        }
    }
};
