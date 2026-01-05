#include <iostream>
using namespace std ;

struct node 
{
    int data ; 
    node * left ; 
    node * right ; 

    node(int value )
    {
        data = value ; 
        left = right = NULL; 
    }
} ; 

class BST
{
    public:
    node *root = NULL ;

    // for inserting the node into BST 


    node* insert( node* root , int data ) 
    {
        if(root == NULL)
        {
            node* newNode = new node(data) ;
            return  newNode ;   
        }

        else if ( data < root->data )
        {
           root->left =  insert(root->left , data ) ; 
        }

        else if( data > root->data) 
        {
            root->right = insert(root->right , data ) ;
        }

        return root ;

    }

    bool search(node* root , int target )
    {
        if(!root) return 0 ;

        else if( root->data == target )
        {
            return 1 ;
        }

        else if ( target < root->data )
        {
            return search(root->left, target) ; 
        }

        else return search(root->right , target) ; 

    }


    void inorder(node* root )
    {
        if(root == NULL) return ; 

        inorder(root->left) ; 
        cout<<root->data<<" " ; 
        inorder(root->right) ; 
    }
    
};


int main ()
{
    BST B ;
    node* root = NULL ;  
     root = B.insert( root , 10 ) ; 
     root = B.insert(root , 20 ) ; 
     root = B.insert(root , 5 ) ;
     root = B.insert(root , 11 ) ; 
     root = B.insert(root , 13 ) ;  
     root = B.insert(root , 17 ) ; 
     root = B.insert(root , 19 ) ; 
     root = B.insert(root , 25 ) ; 
     root = B.insert(root , 29 ) ; 
     root = B.insert(root , 20 ) ; 
     
     B.inorder(root) ; 
     cout<<endl;
     cout<<B.search(root, 9) ;
}