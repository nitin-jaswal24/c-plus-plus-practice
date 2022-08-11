




#include <iostream>



using namespace std;



struct node

{

    int data;

    node *next;





}*first=NULL,*last=NULL; //changes





// code for insertion in the linked list

void Insert(node *n,int index,int val)

{

     if(index==0)

     {

         node *p=new node;

         p->data=val;

         p->next=first;

         first=p;

         if(first==NULL){
             last=p;
         }



     }



        node *p=new node;

     p->data=val;

     n=first;

     for(int i=0;i<index-1;i++)

     {

         n=n->next;

     }
     if(!n->next){
         last=p;
     }
     p->next=n->next;

     n->next=p;









}





// inserting at the last



void insertLast(int val)

{

     node *t=new node;



     t->data=val;

     t->next=NULL;

     if(first==NULL)

     {

         first=last=t;

     }

     else{

        last->next=t;

        last=t;

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

//inserting if the linked list is sorted

void insertSorted(node *n,int index,int value)
{
    node*p=first;
    node *q=nullptr;
    if(p->data<value)
    {
        while(p && p->data<value)
    {
        q=p;
        p=p->next;
    }
    node *t=new node;
    t->data=value;
    t->next=q->next;
    q->next=t;
    }
    else
    {
        node *t=new node;
        t->data=value;
        t->next=first;
        first=t;

    }

}







int main()

{


Insert(first,0,1);

Insert(first,1,99);

Insert(first,2,199);

Insert(first,3,999);

// insertLast(10009);
insertSorted(first,0,0);

display(first);







    return 0;

}
