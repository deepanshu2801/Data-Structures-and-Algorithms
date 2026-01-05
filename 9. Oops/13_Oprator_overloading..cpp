#include <iostream>
using namespace std ;

class complex 
{
    int real ; 
    int imag ; 

    public:
    complex(int r , int i )
    {
        real = r ;
        imag = i ; 
    }

    void show()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    // operator overloading 
    complex operator + ( complex &obj2)
    {
     
        int real = this->real + obj2.real ;
        int imag = this->imag + obj2.imag ; 
        complex c3(real , imag ) ;
        c3.show() ;
    }
};

int main()
{
    complex c1(2,3) ; 
    complex c2(4,5) ; 
    c1 + c2 ;
}