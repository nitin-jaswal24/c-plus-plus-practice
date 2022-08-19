#include <iostream>
class Node;
using namespace std;
Node* head=nullptr;

//circular linked list : when last node is pointing on the first node of the linked list
class Node
{
public:
    int data;
    Node *next;

    // convert the array to the linked list

    void create(int arr[],int n)
{
    int i;
    Node *t,*last;
    head=new Node;
    head->data=arr[0];
    head->next=head;
    last=head;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=arr[i];
        t->next=last->next;
        last->next=t;
        last=t;

    }

}

// lets display the linked list

void display(Node *p)
{
    do
    {
    cout<<p->data<<" ";
    p=p->next;

    }while(p!=head);
}

// lets code the display for circulat linekd list recursively

void displayRec(Node *p)
{
    static int flag=0; //only single copy is avaulbale of the flg varianel
    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        display(p->next);
    }
    flag=0;
}

};


//lets code linked list for insert in a circlular linked list

void insertIndex(Node *p,int pos,int value)
{
    if(pos==0)
    {

        Node *t=head;

        Node *r=new Node;
        r->data=value;
        if(head==nullptr)
        {
            head=r;
            head->next=head;
        }

        else{
            r->next=head;
        while(t->next!=head)
        {
            t=t->next;
        }
        t->next=r;
        r->next=head;
        head=r;
        }

    }
    else{
        Node *t=head;
        for(int i=0;i<pos-1;i++)
        {

            p=p->next;
        }
        Node *h=new Node;
        h->data=value;
        h->next=p->next;
        p->next=h;


    }
}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    Node *t=new Node;
    t->create(a,7);
    t->displayRec(head);
}
