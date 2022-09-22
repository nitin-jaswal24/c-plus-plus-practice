#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)//make constructor
    {

        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }


};

int main()
{
    Node *root=new Node(2);
    root->left=new Node(3);
    root->right=new Node(4);
    root->left->left=new Node(5);
}
