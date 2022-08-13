




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
         }}
     else{
         node *p=new node;

     p->data=val;

     n=first;

     for(int i=0;i<index-1;i++)

     {

         n=n->next;}
     if(!n->next){
         last=p;
     }
     p->next=n->next;

     n->next=p;}
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



//now delting the node

//first deleete the firstNode
//
//void deleteFirst(node *p)
//{
//    p=first;
//    first=first->next;
//    delete p;
//}

// lets delte the specified node

void deleteNode(node *p,int index)
{
    if(index==0)
    {
        p=first;
        first=first->next;
        delete p;
    }
    else{
        p=first;
        node *q=nullptr;
        for(int i=0;i<index-1&&p;i++)
        {   q=p;
            p=p->next;


        }
        if(p->next==nullptr&&p)
        {
            q->next=nullptr;
            last=q;
            delete p;
        }
        else if(p){
            q->next=p->next;
        delete p;
        }


    }

}



// lets check linked list is sorted or not

bool isSorted(node *p)
{
    node *q=nullptr;
    p=first;
    while(p)
    {
        q=p;
        p=p->next;

        if(p&&p->data<q->data)
        {
            return false;
        }


    }
    return true;



}


// now lets remove the duplicates from the linked list
void removeDuplicate(node *p)
{

    node *q=p->next;
    while(q!=nullptr)
    {


        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
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








int main()

{


Insert(first,0,1);

 Insert(first,1,99);

 Insert(first,2,199);

 Insert(first,3,999);
 Insert(first,4,1000);
 Insert(first,5,2000);
  Insert(first,6,2000);
  Insert(first,6,2000);

display(first);
//cout<<isSorted(first)<<endl;
 removeDuplicate(first);
 display(first);







    return 0;

}
