#include <iostream> 
#include <vector> 
using namespace std ;

// Two Sum 

// 1. Bruteforce Approch 

vector<int> TwoSum( vector<int> arr, int target )
{
    int n = arr.size() ; \
    vector<int> ans; 
    for(int i = 0 ; i < n-1  ; i++)
    {
        for(int j = i+1 ; j < n ; j++ )
        {
            if(arr[i] + arr[j] == target) 
            {
               ans = {arr[i] , arr[j]} ; 
               return ans ;
            }
        }
    } 
}


int main()
{
    vector<int> arr = {2,5,7,11} ;
    int target = 9 ;  
    vector<int> ans = TwoSum(arr, target ) ; 
    
    for(int i = 0 ; i < ans.size() ; i++ )
    {
        cout<<arr[i]<<" " ; 
    }
}