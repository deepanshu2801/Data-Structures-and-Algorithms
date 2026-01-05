#include <iostream>
using namespace std ;

class matrix 
{
    int array[5][5]  ;
    int num = 1 ; 
    
    public: 

    matrix()
    {
        for(int i = 0 ; i < 5 ; i++)
        {
            for(int j = 0 ; j < 5 ; j++)
            {
                array[i][j] = num++ ; 
            }
        }

    }

    // overloading of () operator 

    int operator () (int i , int j )
    {
        return array[i][j] ;
    }

};

int main()
{
    matrix m ; 
    cout<<m(0,0) ;  
}