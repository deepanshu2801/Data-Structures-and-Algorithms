#include <iostream>
using namespace std ;

struct node 
{
    int data ; 
    node* next ;

    node(int value) 
    {
        data = value ;
        next = NULL ; 
    }

};

class queue
{
    node* front = NULL;
    node* rear = NULL ;
    int size = 0 ; 

    public:

    //for inserting the an element into the queue 
    void enqueue(int value )
    {
        node* newNode = new node(value) ; 

        if(front == NULL && rear == NULL )  
        {
            front = rear = newNode ; 
        }

        else 
        {
        rear->next = newNode ; 
        rear = newNode ; 
        }
        size++;
        cout<<value<<" inserted into the queue\n"; 
    }

    // for deleting an element from the stack 

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"underflow condition\n";
            return ; 
        }

        else if ( front == rear )
        {
            cout<<front->data;
            front = rear = NULL ; 
        }

        else 
        {
        node* temp = front ; 
        cout<<front->data<<" is deleted\n"; 
        front = front->next ; 
        delete temp ; 
        } 
    }

    void display()
    {
        node* temp = front ; 

        while(temp != NULL) 
        {
            cout<<temp->data<<" "; 
            temp = temp->next ;
        }
        cout<<"\n";
    }

    void peek()
    {
        if(isEmpty())   
        {
            cout<<"underflow condition\n" ; 
            return ;
        }

        cout<<rear->data <<" is the peek of the queue\n";
    }


    bool isEmpty()
    {
        return front == NULL ; 
    }

};

int main()
{
    queue q ;
    q.enqueue(10) ;
    q.enqueue(20) ;
    q.enqueue(30) ;
    q.enqueue(40) ;
    q.enqueue(50) ;
    q.display();
    q.peek();
    q.dequeue() ; 
    q.dequeue() ;
    q.display() ; 
}