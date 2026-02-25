#include <iostream>
using namespace std ; 

class student
{
    string name ; 
    int age ; 

    public:

    void set_Student( string n , int a )
    {
        name = n ; 
        age = a ;
    }

    void show_student()
    {
        cout<<"Name : "<<name<<endl ;
        cout<<"age"<<age ;  
    }
};

int main()
{
    pair <int, string>p1 ; 
    pair <string , int>p2 ; 
    pair <string , string>p3 ; 
    pair <int , student>p4 ;
    
    p1 = make_pair(1, "Dkbose") ; 
    p2 = make_pair("Deepanshu" , 5) ; 
    p3 = make_pair("India" , "New Delhi" ) ; 

    student s1 ; 
    s1.set_Student("dkbose" , 19) ; 
    p4 = make_pair(1, s1) ; 

    cout<<"Pair 1"<<endl ;
    cout<<p1.first<<" "<<p1.second<<endl ; 
     cout<<"Pair 2"<<endl ;
    cout<<p2.first<<" "<<p2.second<<endl ;
     cout<<"Pair 3"<<endl ; 
    cout<<p3.first<<" "<<p3.second<<endl ; 
     cout<<"Pair 4"<<endl ;
    cout<<p4.first<<" ";
    student s2  = p4.second ;
    s2.show_student() ; 
}