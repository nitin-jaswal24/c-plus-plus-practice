#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;


};
class tree
{
 Node *root;
public:
    tree()
    {
        root=nullptr;
    }

    //lets create a tree

void createTree()
{
    Node *p,*t;
    queue<Node *>q;//i have made  the queue container of the pointers
    int x;
    cout<<"enter the root value"<<endl;
    cin>>x;
    Node *root=new Node;
    q.emplace(root);
    root->data=x;
    root->left=nullptr;
    root->right=nullptr;
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        cout<<"enter the left child"<<endl;
        cin>>x;
        if(x!=-1)
        {
            Node *temp=new Node;
            temp->data=x;
            temp->left=nullptr;
            temp->right=nullptr;
            p->left=temp;
            q.push(temp);
        }
        cout<<"enter the right child"<<endl;
        cin>>x;
        if(x!=-1)
        {
            Node *temp=new Node;
            temp->data=x;
            temp->left=nullptr;
            temp->right=nullptr;
            p->right=temp;
            q.push(temp);
        }

    }



}

//lets traverse the tree

};
int main()
{
    tree bt;
    bt.createTree();



}
