#include <iostream>

using namespace std;
class Queue
{
private:
    int front;
    int rear;
    int *arr;
    int  size;
public:
    Queue()
    {
        size=10001;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    bool insertLast(int data)
    {
        if((front==0&&rear==size-1)||(rear==(front-1)%size-1))
        {
            cout<<"queue is full"<<endl;
            return 0;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(rear==size-1&&front!=0)
        {
            rear=0;
        }
        else{
                rear++;
        }
        arr[rear]=data;
        return true;

    }
    bool insertFront(int data)
    {
        if((front==0&&rear==size-1)||rear==(front-1)%size-1)
        {
            cout<<"the queue is full cant insert in it"<<endl;
            return 0;
        }
        else if(front==-1)//first element to insert
        {
            front=rear=0;
        }
        else if(front==0&&rear!=size-1)
        {
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=data;
        return true;

    }

    bool popFront()
    {if((front==0&&rear==size-1)&&rear==(front-1)%size-1)
        {
            cout<<"the queue is full cant insert in it"<<endl;
            return 0;
        }
        int ans=arr[front];
        arr[front]=-1;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(front==size-1)
        {
            front=0;//maintain cyclic nature
        }
        else{
            front++;
        }

    }
    bool PopRear()
    {

        if(front==-1)
        {
            cout<<"queueu is empty"<<endl;
            return 0;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(rear==0)
        {
            rear=size-1;//maintain cyclic nature
        }
        else{
            rear--;
        }
    }
    void display()
    {

        for(int i=front;i<=rear;i++)
        {

            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }

};
int main()
{
Queue *q=new Queue;
q->insertFront(23);
q->insertFront(12);
q->display();
}
