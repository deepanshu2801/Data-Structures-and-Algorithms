#include <iostream>
using namespace std ;

struct node
{
    int data ;
    node* left ;
    node* right ;

    node(int value )
    {
        data = value ; 
        left = right = NULL ;
    }
} ; 

node* Binary_Tree()
{
    int x ;
    cin>>x;

    if(x == -1 ) return NULL ;

    node* temp = new node(x) ; 

    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = Binary_Tree() ;  // for left node 

    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = Binary_Tree() ; // for right node 

    return temp ; 
}

// for traversal 

void preorder(node* rootNode)
{
    if(rootNode == NULL) return ; 

    cout<<rootNode->data ;
    preorder(rootNode->left) ; 
    preorder(rootNode->right) ; 
}

void postorder(node* rootNode)
{
    if(rootNode == NULL) return ; 

    postorder(rootNode->left) ; 
    postorder(rootNode->right) ; 
    cout<<rootNode->data ;
}

void inorder(node* rootNode)
{
    if(rootNode == NULL) return ; 

    inorder(rootNode->left) ; 
    cout<<rootNode->data ;
    inorder(rootNode->right) ; 
}

int main()
{
    cout<<"Enter the root node value: " ;
    node* root ; 
    root = Binary_Tree() ; 

    cout<<"PreOrder : ";
    preorder(root) ;
    cout<<endl;

    cout<<"PostOrder : ";
    postorder(root) ;
    cout<<endl;

    cout<<"inOrder : ";
    inorder(root) ;
    cout<<endl;

}