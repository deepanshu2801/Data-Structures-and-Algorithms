#include <iostream>
#include <vector>
#include <limits.h>
using namespace std ; 

// brute force approch 
double findMaxAverage(vector<int>& arr, int k) 
{
     double sum = 0 ; 
     double maximum = INT_MIN;
     int i = 0 ; 
     int j = 0 ;
     while( i <= arr.size() - k )
     {
        j = i ; 
        while(j < i + k )
        {
            if( j < k )
            {
                sum += arr[j] ; 
                j++ ;
            } 

            else if(j== k )
            {
                sum += arr[j] ; 
                maximum = max(maximum, sum) ; 
                sum = sum - arr[i] ; 
                i++ ; 
            }
            
        }
     }
    return maximum ; 
}

// optimal approach 
double findMaxAverage2(vector<int>& arr, int k) 
{
    double sum = 0 ; 
    double maximum = INT_MIN;
    int i = 0 ; 
    int j = 0 ;
    while ( j < arr.size()) 
    {
        int window = j - i + 1 ;
        if(window < k )
        {
            sum += arr[j] ; 
            j++ ; 
        }

        else if ( window == k )
        {
            sum += arr[j] ; 
            maximum = max(maximum, sum) ; 
            sum = sum - arr[i] ; 
            i++ ; 
            j++ ; 
        }
    } 
    return  maximum/k   ; 
}

int main()
{
    vector<int> arr = {1,12,-5,-6,50,3}  ; 
    int k = 4 ;
    cout<<findMaxAverage(arr, k) ; 
}
