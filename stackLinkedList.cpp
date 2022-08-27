// in this head is the top
#include <iostream>
class Node;
using namespace std;
class Node
{
public:
    int data;
    Node *next;


};
Node *head=nullptr;
void insertNode(Node *p,int data)
{
    Node *temp=new Node;
    if(!temp)
    {
        cout<<"the stack is full"<<endl;
    }
    else if(head==nullptr)
    {
        temp->data=data;
        temp->next=nullptr;
        head=temp;
    }
    else{
        temp->data=data;
        temp->next=head;
        head=temp;
    }
}

void deleteNode(Node *p)
{
    if(head==nullptr)
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    Node *temp=head;
    p=head->next;
    head=p;
    delete(temp);
}
int isEmpty()
{
    return head==nullptr;
}
int stackTop()
{
    Node *temp=head;
    if(!isEmpty())
    {
        return temp->data;
    }
    else{
        return -1;
    }
}

void peek(int pos)
{
    Node *temp=head;
    for(int i=0;i<pos-1&&temp!=nullptr;i++)
    {
        temp=temp->next;
    }
    if(temp!=nullptr)
    {
        cout<<temp->data<<endl;
    }
    else{
        cout<<"Not availabel"<<endl;
    }
}
void display()
{Node*p=head;
if(head)
{
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;

    }
    cout<<endl;
}

}

int main()
{
    insertNode(head,11);
    insertNode(head,111);
    insertNode(head,1111);
    deleteNode(head);
    display();
    cout<<stackTop();
    cout<<endl;
    peek(2);
}
