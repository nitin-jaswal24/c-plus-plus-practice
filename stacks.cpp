#include <iostream>
#define max 1000
using namespace std;
class Stack
{int top;
public:
    int a[max];
    Stack()
{
    top=-1;

}
bool push(int data);
int pop();
int peek();
bool isEmpty();
};
bool Stack :: push(int x)
{
    if(top>=max-1){
        cout<<"stack overflow"<<endl;
    }
    else{
        a[++top]=x;
        cout<<x<<" has been pushed in the stack"<<endl;
        return true;
    }
}

int Stack::pop()
{
    if(top<0)
    {
        cout<<"stack has no elements to pop out"<<endl;
        return 0;

    }
    int x=a[top--];
    return x;
}
int Stack ::peek()
{
    if(top<0)
        {
            return -1;}
    else{
        return a[top];
    }
}
bool Stack::isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
Stack s;
s.push(12);
s.push(12);
s.push(10);
s.push(122);
s.pop();
cout<<s.isEmpty();

}
