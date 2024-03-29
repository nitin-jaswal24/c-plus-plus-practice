#include <iostream>
#include <queue>
#include <stack>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data=d;
        this->left=nullptr;
        this->right=nullptr;
    }
};

Node* buildTree()
{
    cout<<"enter the data "<<endl;
    int data;
    cin>>data;
    Node* root=new Node(data);
    if(data==-1)
    {
        return nullptr;
    }
    cout<<"enter data for inserting in left of "<<data<<" "<<endl;

    root->left=buildTree();
    cout<<"enter the data for right of"<<data<<endl;
    root->right=buildTree();
    return root;

}

void levelOrderTraversal(Node *root)
{

    queue<Node *> q;
    q.push(root);
    q.push(nullptr);


    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp==nullptr)
        {
            cout<< endl;
            if(!q.empty())
            {
                q.push(nullptr);
            }
        }
        else{
                    cout<<temp->data<<" ";
                    if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }

        }

    }
}


void preOrderTraversal(Node *root)
{
    Node *temp=root;
    if(temp)
    {
        cout<<temp->data<<" ";
        preOrderTraversal(temp->left);
        preOrderTraversal(temp->right);
    }
}
void postOrderTraversal(Node *root)
{
    if(root)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data<<" ";

    }
}
void inOrderTraversal(Node *root)
{
    if(root)
    {
        inOrderTraversal(root->left);
                cout<<root->data<<" ";

        inOrderTraversal(root->right);
    }
}
void iterativePostOrderTraversal(Node *root)
{
    stack<long int> st;
    Node *t=root;
    long int temp;
    while(!st.empty()||t!=NULL)
    {
        if(t!=nullptr)
        {
            st.emplace((long int)t);
            t=t->left;

        }
        else{
            temp=st.top();
            st.pop();
            if(temp>0)
            {
                st.emplace(-temp);
                t=((Node*)temp)->right;
            }
            else{
                cout<<((Node*)(-1*temp))->data<<" ";
                t=nullptr;
            }
        }

    }
}
//lets count the nuber of nodes recursively

int countNodes(Node *root)
{
    int x,y;
    Node *p=root;
    if(p) //it is the base conditon
    {
        x=countNodes(p->left);
        y=countNodes(p->right);
        return x+y+1;
    }
    return 0;

}


int main()
{
    Node *root=nullptr;
    //creating a tree
    //1 3  7 -1-1 11 -1 -1 5 17 -1 -1 -1
   root=buildTree();
//   levelOrderTraversal(root);
//    preOrderTraversal(root);
    cout<<endl;
    postOrderTraversal(root);
    cout<<endl;
//    inOrderTraversal(root);
iterativePostOrderTraversal(root);
cout<<endl;
cout<<countNodes(root);
}
