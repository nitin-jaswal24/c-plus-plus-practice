#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;

}*first=NULL;
void create(int arr[],int n)
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
        cout<<p->data<<endl;
        p=p->next;
    }
}

int main()
{
    int A[]={3,4,5,6,7,8,9};
    create(A,7);
    cout<<count(first)<<endl;
    cout<<add(first)<<endl;

    display(first);
    return 0;
}
