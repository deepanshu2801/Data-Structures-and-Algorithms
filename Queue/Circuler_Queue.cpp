#include <iostream>
using namespace std ; 

class Cqueue
{
    int size ; 
    int* arr ;
    int front ; 
    int rear ;

    public:

    Cqueue(int n )
    {
        size = n ; 
        arr = new int[size] ; 
        front = rear = -1;
    }

    void enqueue(int value )
    {
        if((rear+1) % size == front )
        {
            cout<<"overflow condition \n";
            return ; 
        } 

        else if ( front == -1  )
        {
            front=rear = 0 ; 
            arr[rear] = value ;
        }
        
        else 
        {
            rear = (rear+1) % size; 
            arr[rear] = value ; 
        }

       cout<<value<<" is inserted into the queue\n";
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"queue is underflow\n";
        }

        else if ( front == rear )
        {
            cout<<arr[front]<<" is deleted\n";
            front = rear = -1 ;
        }

        else 
        {
            cout<<arr[front]<<" is deleted \n" ; 
            front = (front + 1) % size ; 

        }
    }

    void display()
    {

        if(isEmpty())
        {
            cout<<"underflow condition\n";
            return ;
        } 

        int i = front ; 
        while( i != rear)
        {
            cout<<arr[i]<<" ";
            i = (i+1) % size ;
        }
        cout<<(arr[rear]) ; 
        cout<<endl;
    }

    bool isEmpty()
    {
        return front == -1 ;
    }
}; 


int main()
{
    Cqueue q(5) ;
    q.enqueue(10) ;
    q.enqueue(20) ;
    q.enqueue(30) ;
    q.enqueue(40) ;
    q.enqueue(50) ;
    q.display() ;
    q.enqueue(60) ; 
    q.dequeue() ;
    q.dequeue() ; 
    q.enqueue(100) ; 
    q.enqueue(110) ; 
    q.display() ; 
}