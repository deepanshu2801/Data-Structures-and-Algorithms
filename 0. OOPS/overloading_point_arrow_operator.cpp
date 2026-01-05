#include <iostream>
using namespace std ; 

class add
{

    int value ; 

    public:
    add( int n ) 
    {
        value = n ;
    }

    // operator overloading of , 

    int operator , (add &obj)
    {
        return this->value + obj.value ; 
    }
}; 

int main()
{
    add a(3) ; 
    add b(5) ; 

    int  c =  (a , b ); 
    cout<<c ;  
}