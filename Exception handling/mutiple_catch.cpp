#include <iostream> 
#include <vector>
#include <string>
using namespace std ;


int main()
{
    try 
    {
        vector<int> vec = {2,4,5,6,8} ; 

        int a, b , c, i , val; 

        string str ;  

        // exception 1. Index out of the range 
        cout<<"Enter Index = "; 
        cin>>i ; 
        cout<<vec.at(i)<<endl ; 

        // exception 2. runtime error( divide by 0 is not defind )
        cout<<"Enter a = " ; 
        cin>>a ; 
        cout<<"Enter b = " ; 
        cin>>b; 
        if(b==0) throw runtime_error("divide by 0 is not defind\n") ; 
        else cout<<a/b<<endl; 

        // exception 3. invalid argument 
        cout<<" Enter Numeric string = " ; 
        cin>>str ;
        cout<<stoi(str)<<endl ; 
    }
    catch(out_of_range e )
    {
        cout<<"exception : out of the range \n " ; 
    }
    
    catch(runtime_error e )
    {
        cout<<e.what();
    }

    catch(invalid_argument e )
    {
        cout<<"exception : invalid argument\n" ; 
    }


}