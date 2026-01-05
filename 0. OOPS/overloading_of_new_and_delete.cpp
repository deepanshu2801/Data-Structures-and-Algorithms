#include <iostream>
#include <stdlib.h>
using namespace std ;

class add
{
    int a ; 
    int b ; 

    public:

    add(int a , int b )
    {
        this->a = a ; 
        this->b = b ;
    }

    int  addition()
    {
        return a + b ; 
    }

    void * operator new (size_t size )
    {
        cout<<" new oprator function called\n";

        void *ptr = malloc(size) ; // allocate memory manually.
        
        if(!ptr) throw bad_alloc() ; // if allocation fails 
        return ptr ;
    }

    void operator delete( void * ptr )
    {
        cout<<"delete operator function called\n";
        free(ptr) ; // free memory manually
    }
};


int main()
{
    add *ptr = new add(2,3) ;  // calling of overloaded new 
    int sum = ptr->addition() ; // calling of overloded delete 
    cout<<"sum = "<<sum<<endl ;
    delete ptr ; 
return 0 ; 
}