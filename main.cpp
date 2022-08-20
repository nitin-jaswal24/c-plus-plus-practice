#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;

}*first=NULL,*second=nullptr,*third=nullptr;
void create1(int arr[],int n)
{
    int i;
    node *t,*last;
    first=new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}


int count(node *p)
{

    if(p==0)
    {
        return 0;

    }
    return count(p->next)+1;
}
void create2(int arr[],int n)
{
    int i;
    node *t,*last;
    second=new node;
    second->data=arr[0];
    second->next=NULL;
    last=second;
    for(i=1;i<n;i++)
    {
        t=new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}




int add(node *p)
{
    int sum=0;
    if(p==0)
    {
        return 0;
    }
    else{
        return p->data+add(p->next);
    }
}

void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


//lets merge the 2 linked list
void mergeList(node *p,node *q)
{
    node *last;
    if(p->data>q->data)
    {
        third=last=q;
        q=q->next;
        third->next=nullptr;
    }
    else{
        third=last=p;
        p=p->next;
        third->next=nullptr;
    }
    while(p!=nullptr && q!=nullptr)
    {
        if(p->data>q->data)
        {
            last->next=q;
            last=q;
            q=q->next;
            last->next=nullptr;
        }
        else{
            last->next=p;
            last=p;
            p=p->next;
            last->next=nullptr;
        }
    }
    if(p!=nullptr)
    {
        last->next=p;
    }
    if(q!=nullptr)
    {
        last->next=q;

    }

}

int main()
{
    int A[]={10,20,30,40,50};
    int B[]={5,15,25,35,45};
    create1(A,7);
    create2(B,7); // 2 linked list has been created

//    display(first);
//    display(second);
    mergeList(first,second);
    display(third);
    return 0;
}

