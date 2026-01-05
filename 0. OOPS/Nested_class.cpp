#include <iostream>
using namespace std ; 

class student 
{
    string name ;
    int rollNo ;

    class address
    {
        int houseNo ; 
        string stree ; 
        string city ; 
        string state ;

        public:

        void setAddress(int h , string s , string c , string st )
        {
            houseNo = h ;
            stree = s ;
            city = c ;
            state = st ;
        }
    };
};