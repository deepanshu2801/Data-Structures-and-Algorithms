#include <iostream>
using namespace std ; 

class queue 
{
    int size ; 
    int *arr ;
    int front ; 
    int rear ;  

    public:
    queue(int n )
    {
        size = n; 
        arr = new int[size] ; 
        front = rear = -1 ;  
    }

    void enqueue(int value )
    {
        if ( rear == size - 1 ) 
        {
            cout<<"overflow condition\n"; 
            return ; 
        }
        else if(front == -1 && rear == -1 )
        {
            front=rear = 0 ; 
        }

        else
        {
            arr[++rear] = value ; 
            cout<< value<<" pushed into the queue \n" ; 
        }
    }

    void dequeue()
    {
        if(isEmpty()) 
        {
            cout<< "underflow condtion\n";
            return ; 
        }

        else if (front == rear )
        {
                cout<<arr[front] ; 
                front=rear = - 1 ;
        }

        else 
        {
            cout<<arr[front++]<<" is deleted\n" ; 
        }
    }

    void peek()
    {
        cout<<arr[rear]<<" is the peek of the queue\n" ;
    }

    void display()
    {
        for( int i = front  ; i <= rear ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl; 
    }
    bool isEmpty()
    {
        return rear == -1 ;
    }
}; 


int main()
{
    queue q(10) ;

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
    q.isEmpty() ; 

}