#include <iostream>
#include <vector>
#include <string>
using namespace std ; 

/*here 3 exception can happen 
1. Index out of the range - when user enter invalid value of the index 
2. runtime erorr - whwen user enter the denominator value equal to 0 then the run time error ( divide by 0 is not defined )
3. invalid argument - when user enter the invalid string instad of integer string 

so to handle these all exception we create the multiple try-throe-catch block which handle all the exception */ 

int main()
{
    vector<int> vec = {2,4,5,6,8} ; 

    int a, b , c, i , val; 

    string str ;  

    cout<<"Enter Index = "; 
    cin>>i ; 

    cout<<"Enter a = " ; 
    cin>>a ; 

    cout<<"Enter b = " ; 
    cin>>b; 

    cout<<" Enter Numeric string = " ; 
    cin>>str ;

   try
   {
        val = vec.at(i) ;
        cout<<"the value in ith index = "<<val<<endl;
   }
   catch(out_of_range  e )
   {
        cout<<"\n  Exception : Index out of the range\n";
   }
    
    
   try 
   {
        if(b == 0 )
        {
            throw runtime_error("Divide by 0 not possible\n ") ;
        }
        c = a / b ; 
        cout<<a<<" / "<<b<<" = "<<c<<endl; 
   }
   catch(runtime_error e)  
   {
        cout<<e.what() ; 
   }
   
   try 
   {
        val = stoi(str) ; 
        cout<<val*2; 
   }
   catch(invalid_argument e)
   {
        cout<<"invalid argument \n"; 
   }
}