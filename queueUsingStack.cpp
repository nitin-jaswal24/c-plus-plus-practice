#include<bits/stdc++.h>

using namespace std;
#include <stack>
class Queue{
    public:
    stack<int> s1,s2;
    void push(int data)
    {
        while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(data);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }


    }
    int pop()
    {
        if(s1.empty())
        {
            cout<<"the stack is empty "<<endl;
            return 0;
        }
        else{
            int x= s1.top();
            return x;
        }
    }
    int top()
    {
        if(s1.empty())
        {
            cout<<"the stack is empty "<<endl;
            return 0;
        }
        else{
            return s1.top();
        }
    }




};
int main()
{
    Queue q;
    q.push(12);
    q.push(13);

    q.push(14);

    q.push(15);

    q.push(16);
    cout<<q.pop();


}
