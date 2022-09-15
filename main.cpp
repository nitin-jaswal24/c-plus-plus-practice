/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <queue>
using namespace std;
class Stack
{
    public:
            queue <int> q;

    void push(int data)
    {
        q.push(data);
        int s=q.size();

        for(int i=0;i<s-1;i++)
        {
            q.push(q.front());
            q.pop();
        }

    }
    int pop()
    {
        int x=q.front();
        q.pop();
        return x;
    }
    int top()
    {
        return q.front();
    }
    int size()
    {
        return q.size();
    }
};
int main()
{
    Stack s;
    s.push(23);
    s.push(24);
    s.push(25);
    s.push(26);

    cout<<s.pop()<<endl;

}

