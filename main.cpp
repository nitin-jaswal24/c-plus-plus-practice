#include <iostream>
using namespace std;
class Node;
Node *last=nullptr;
Node *first=nullptr;
class Node
{
public:

    int data;
    Node *next;
    // void insertEmpty(Node *last,int value)

    // {
    //     if(last!=nullptr)
    //     {
    //         return;
    //     }

    //     Node *temp=new Node;
    //     temp->data=value;
    //     ::last=temp;
    //     first=temp;
    //     temp->next=last;

    // }

    //lets insert at the last node and make last node pointing on the first node
    // void insertLast(Node *last,int value)
    // {
    //     if(last==nullptr)
    //     {
    //         insertEmpty(last,value);
    //     }

    //     Node *temp=new Node;
    //     temp->data=value;
    //     temp->next=last->next;
    //     last->next=temp;
    //     ::last=temp;

    // }
    // void insertPos(Node *p,int index,int data)
    // {

    //     for(int i=0;i<index-1;i++)
    //     {
    //         p=p->next;
    //     }
    //     Node *temp=new Node;
    //     temp->data=data;
    //     temp->next=p->next;
    //     p->next=temp;


    // }

    void insertNode(Node *p,int data,int index)
    {
        if(index<0)
        {
            return;
        }
        // Node *temp=new Node;
        if(index==0)
        {   Node *q=first;

            Node *temp=new Node;
            if(first==nullptr)
            {   temp->data=data;

                first=temp;
                temp->next=first;

            }
            else{
                temp->data=data;
                temp->next=first;
                while(q->next!=first)
                {
                    q=q->next;
                }
                temp->next=first;
                q->next=temp;
                first=temp;

            }
        }
        else{
            Node *q=first;
            for(int i=0;i<index-1;i++)
            {
                q=q->next;
            }
            Node *temp=new Node;
            temp->data=data;
            temp->next=q->next;
            q->next=temp;
        }
    }

    //delete the node

    void deleteNode(Node *first,int index)
    {
        Node *p;
        Node *q;
        if(index==1)
    {
        p=first;
        while(p->next!=first)
        {
            p=p->next;
        }
        if(p==first)
        {
            delete first;
            first=nullptr;
        }
        else{
        p->next=first->next;
        delete first;
        first=p->next;

        }
    }

    else{
        p=first;
        for(int i=0;i<index-2;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        delete q;

    }

    }

    // traverse the whole linked list
    void display(Node *p)
    {
        if(p==nullptr)
        {
            return;
        }
        do
        {
            cout<<p->data<<" ";
            p=p->next;
        }while(p!=first);
    }

};
int main()
{
    Node *r=new Node;
    // r->insertEmpty(last,12);
    // r->insertLast(last,10);
    // r->insertLast(last,100);
    r->insertNode(first,100,0);
    r->insertNode(first,100,1);
    r->insertNode(first,200,0);
    r->insertNode(first,4,3);
    r->display(first);
    cout<<endl;
    r->deleteNode(first,4);

    r->display(first);
}




