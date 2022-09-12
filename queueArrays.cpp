#include <iostream>

using namespace std;
class Queue
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    Queue(){
    size=10001;
    arr=new int[size];
    front=-1;
    rear=-1;
    }

    //operations on the queue
    bool isEmpty()
    {

        if(front==rear)
        {
            return true;
        }
        else{
            return false;
        }
    }

    bool isFull()
    {

        if(rear==size-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int x)
    {
        if(rear==size)
        {
            cout<<"the queue is full cant insert in it"<<endl;
            return ;
        }
        arr[++rear]=x;


    }

    void dequeue()
    {

        if(front==rear)
        {
            cout<<"the queue is empty"<<endl;
            return;
        }
        cout<<arr[++front]<<" deleted out:"<<endl;

    }

    void display()
    {
        for(int i=front+1;i<=rear;i++)
        {

            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue *q=new Queue;
    q->enqueue(2);
    q->enqueue(22);

    q->enqueue(222);

    q->enqueue(2222);

                    q->enqueue(22222);

                        q->enqueue(222222);

    q->display();
    q->dequeue();
    q->display();
}
