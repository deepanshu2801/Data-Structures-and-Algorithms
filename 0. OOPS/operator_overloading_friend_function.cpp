#include <iostream>
using namespace std ;


// operator overloading using friend function 
class complex
{
   int real ; 
   int img  ; 

   public:
   void setter(int r , int i )
   {
      real = r ; 
      img = i ; 
   }

   void getter()
   {
      cout<<real<<" + "<<img<<"i" <<endl; 
   }

   // decleration of friend function 

   friend complex operator + (complex , complex ) ; 
};

// defination of friend function 

complex operator+ (complex c1 , complex c2 )
{
   complex temp ; 

   temp.real = c1.real + c2.real ; 
   temp.img = c1.img + c2.img ; 

   return temp ; 
}

int main()
{
   complex x ,y ,z; 
   x.setter(2,3) ; 
   y.setter(3,5) ; 

   z = operator+(x, y) ;  
   z.getter() ; 
}

