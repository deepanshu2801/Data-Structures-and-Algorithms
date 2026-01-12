#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

class BST
{
public:
    // for inserting the node

   node* insertNode(node* currentNode, int x)
    {
        if (currentNode == NULL)
        {
            node* newNode = new node(x);
            return newNode;
        }

        if (x <= currentNode->data)
        {
            currentNode->left = insertNode(currentNode->left, x);
        }
        else
        {
            currentNode->right = insertNode(currentNode->right, x);
        }

        return currentNode;
    }

    //for searching 
    node* search(node* root , int target)
    {
        if(root->data == target )
        {
            cout<<target<<" is found at "<<root<<" address";
            return root;
        }

        else if( target < root->data) return search(root->left , target ) ; 

        else return search(root->right, target) ; 

        return NULL ;
     }


    // for traversal 
    void InOrder(node* root )
    {

        if(root == NULL ) return ; 

        InOrder(root->left) ;
        cout<<root->data<<" ";
        InOrder(root->right) ;
    }

};

int main()
{
    BST B;
    node *root = NULL;
    root = B.insertNode(root, 10);
    root = B.insertNode(root, 20);
    root = B.insertNode(root, 13);
    root = B.insertNode(root, 11);
    root = B.insertNode(root, 12);
    root = B.insertNode(root, 5);
    root = B.insertNode(root, 1);
    root = B.insertNode(root, 4);
    root = B.insertNode(root, 7);
    //B.InOrder(root) ; 
    node* found = B.search(root , 11) ;     
}