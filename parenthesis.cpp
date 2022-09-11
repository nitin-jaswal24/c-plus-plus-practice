#include <iostream>
#define max 1000
#include <cstring>
using namespace std;
class Stack
{int top;
public:
    int a[max];

    Stack()
{
    top=-1;

}
bool push(char data);
char pop();
char peek();
bool isEmpty();
};
bool Stack :: push(char x)
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

char Stack::pop()
{
    if(top<0)
    {
        cout<<"stack has no elements to pop out"<<endl;
        return 0;

    }
     char x=a[top--];
         cout<<x<<"poppes out"<<endl;

    return x;
}
char Stack ::peek()
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
int isBalnced(char* exp)
{
    Stack s;
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(')
        {

            s.push(exp[i]);
        }
        else if(exp[i]==')'){
                if(s.isEmpty())
                {
                    return false;
                }
                else{
                    s.pop();
                }

        }
    }
    if(s.isEmpty())
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
char c[]="((a+b)*(c-d))";
cout<<isBalnced(c)<<endl;

}
