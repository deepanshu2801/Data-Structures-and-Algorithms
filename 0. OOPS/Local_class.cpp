#include <iostream>
using namespace std ; 

void hello()
{
    class hii
    {
        public:
        
        void say_hii()
        {
            cout<<"Hello World!";
        }
    };

    hii::say_hello()
    {
        cout<<"hii";
    }

    hii h ; 
    h.say_hii() ;
}


int main()
{
    hello() ; 

}