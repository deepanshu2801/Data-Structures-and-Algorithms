#include <iostream>
#include <vector>
#include <queue>
using namespace std ;

// brute force approch 
vector<int> firstNegInt1(vector<int>& arr, int k) 
{
    vector<int> ans = {} ; 
    for(int i = 0 ; i <= arr.size() - k ; i++)
    {
        bool check = true ; 
        int j = i ; 
        while(j < (i+k))
        {
            if( arr[j] < 0  && check )
            {
                ans.push_back(arr[j]) ; 
                check = false ; 
                break ;
            }
            j++ ; 
        }

        if(check) 
        {
            ans.push_back(0) ;
        }
    }

    return ans ; 
        
}

// optimal approch 
vector<int> firstNegInt2(vector<int>& arr, int k)
{
    int i = 0 ; 
    int j = 0 ;
    queue<int> q ;
    vector<int> ans = {} ; 
    while( j < arr.size()) 
    {
        int window = j-i+1 ; 

        if(arr[j] < 0 )  q.push(j) ; 

        if( window < k ) j++ ;

        else if ( window == k )
        {
            if(!q.empty()) ans.push_back(arr[q.front()]) ; 

            else ans.push_back(0) ; 

            if(!q.empty() && q.front() == i ) q.pop() ; 

            i++;
            j++ ; 
        }
    }
return ans ;

}



int main()
{
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28} ;
    int k = 2 ; 
    vector<int> ans = firstNegInt2(arr, k ) ; 
    for(int i = 0 ; i < ans.size() ; i++)
    {
        cout<<ans[i]<<" " ; 
    }
 }