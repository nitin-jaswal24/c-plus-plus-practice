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
    bool enqueue(int x)
    {
        if((front==0&&rear==size-1)||(rear==(front-1)%size-1))//second condition is if when rear is before front

        {
            cout<<"the queue is full cant insert in it"<<endl;
            return 0 ;
        }
        else if(front==-1){//first element to insert
            front=rear=0;
            arr[rear]=x;
        }
        else if(rear==size-1&&front!=0)
        {
            rear=0;
            arr[rear]=x;
        }
        else{
                arr[++rear]=x;

        }
        return true;


    }

    int dequeue()
    {

//        if(front==rear)
//        {
//            cout<<"the queue is empty"<<endl;
//            return;
//        }
//        cout<<arr[front++]<<" deleted out:"<<endl;
        if(front==-1) //to check queue is empty
        {
            cout<<"the queue is empty"<<endl;
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;

         if(front==rear){//single element is present
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;//to maintain cyclic nature
        }
        else{
            front++;
        }
        return ans;


    }

    void display()
    {
        for(int i=front;i<rear;i++)
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





//circualr queue
//#include <iostream>
//using namespace std;
//class Queue
//{
//private:
//    int *arr;
//    int front;
//    int rear;
//    int size;
//public:
//    Queue()
//    {
//        size=10;
//        front=0;
//        rear=0;
//        arr=new int[size];
//    }
//
//    //enquqe operation
//    void enqueue(int data)
//    {
//        if((rear+1)%size==front)
//        {
//            cout<<"the queue is full"<<endl;
//        }
//        else{
//            rear=(rear+1)%size;
//            arr[rear]=data;
//        }
//    }
//    int dequeue()
//    {int x=-1;
//        if(front==rear)
//        {
//            cout<<"the quqeue is empty"<<endl;
//
//        }
//        else{
//            front=(front+1)%size;
//            x=arr[front];
//
//        }
//        return x;
//    }
//    void display()
//    {
//        for(int i=front+1;i<=rear;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//    }
//};
//int main()
//{
//Queue *q=new Queue;
//q->enqueue(10);
//q->display();
//
//}

















