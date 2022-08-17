#include <iostream>
#include <stack>
using namespace std;
class Stack
{public:
    int *arr;
    int Size;
    int top;
    Stack(int Size)
    {
        this->Size=Size;
        arr=new int[Size];
        top=-1;
    }
    void push(int element)
    {
        if(Size-top>0)
        {top++;
        arr[top]=element;

        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop()
    {
        if(Size-top>0)
        {
            top--;
        }

    }
    int peek()
    {if(top>=0)
    {
        return arr[top];
    }
    else{
        return -1;
    }

    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
//    stack <int> s;
//    s.push(3);
//    s.push(4);
//    s.push(23);
//    s.pop();
//    cout<<s.top()<<endl;
//
//    if(s.empty())
//    {
//        cout<<"the stakc is empty"<<endl;
//
//    }
//    cout<<s.size();



Stack stk(5);
stk.push(34);
stk.push(3);

stk.push(4);

stk.push(3234);
stk.pop();

cout<<stk.peek()<<endl;
cout<<stk.isEmpty();
}
