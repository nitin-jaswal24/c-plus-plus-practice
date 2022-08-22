#include <iostream>
class Node;
using namespace std;
//Node *first=nullptr;
class Node
{
    public:
    Node *prev;
    int data;
    Node *next;
    Node (int data)
    {
        this->data=data;
        this->prev=nullptr;
        this->next=nullptr;
    }


    //lets insert at head node


    //lets insert a new node
//    void addEmpty(Node *p,int data)
//    {
//        Node *temp=new Node;
//        temp->data=data;
//        temp->prev=nullptr;
//        temp->next=nullptr;
//        first=temp;
//    }
//    void addNode(Node *p,int data,int index)
//    {
//        Node *t=first;
//        Node *temp=new Node;
//        temp->data=data;
//        for(int i=0;i<index-1;i++)
//        {
//            t=t->next;
//        }
//        temp->prev=t;
//        t->next=temp;
//        temp->next=nullptr;
//    }
//
//    //add NOde on head
//    void addHead(Node *p,int data)
//    {
//        Node *temp=new Node;
//        temp->next=first;
//        temp->prev=nullptr;
//        temp->data=data;
//        first=temp;
//
//
//    }


    //finding the length of linekd list
//    int countNodes(Node *p)
//    {int n=0;
//
//        while(p)
//        {
//
//            p=p->next;
//             n++;
//        }
//        return n;
//    }
};
void insertHead(Node *&head,int data)
    {
        if(head==nullptr)
        {
            Node *temp=new Node(data);
            head=temp;
            return;

        }
        Node *temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;

    }


void insertTail(Node * &tail,Node * &head,int data)
{
    if(tail==nullptr)
    {

        Node *temp=new Node(data);
        tail=temp;
        head==temp;
        return;
    }
    Node *temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;



}

//insert at  any position
void insertPos(Node *&head,Node *&tail,int pos,int data)
{
    if(pos==1)
    {
        insertHead(head,data);
        return;
    }

    Node *p=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        p=p->next;
        cnt++;
    }
    if(p->next==nullptr)
    {
        insertTail(tail,head,data);
        return;
    }
    Node *temp=new Node(data);
        temp->prev=p;


    temp->next=p->next;
    p->next->prev=temp;
            p->next=temp;




}
void display(Node *head)
    {Node *temp=head;
        while(temp)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }
int main()
{
//    Node *r=new Node(23 );
//    Node *head=r;
//    Node *tail=r;
Node *head=nullptr;
Node *tail=nullptr;

    insertHead(head,1);
    insertHead(head,11);
    insertHead(head,111);
    insertTail(tail,head,100);
    display(head);
    insertPos(head,tail,1,1);

    display(head);
    insertPos(head,tail,4,5);
    display(head);

    insertPos(head,tail,5,555);
    display(head);


//    r->addEmpty(first,23);
//    r->addNode(first,100,1);
//    r->addNode(first,300,2);
//    r->addHead(first,9);
//    r->display(first);
//    cout<<r->countNodes(first);
}
