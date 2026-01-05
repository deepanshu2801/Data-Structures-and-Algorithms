#include <iostream>
using namespace std ; 

int main()
{
    int arr[] = { 5,2,6,8,9,1} ;
    int n = sizeof(arr) / sizeof(int) ; 

    for(int i = 0 ; i < n -1  ; i++)
        {
            int min_idx = i ; 

            for(int j = i ; j < n ; j++)
            {
                if(arr[j] < arr[i]) min_idx = j ;
            }
        swap(arr[i] , arr[min_idx]) ; 
        }

    for( int i = 0 ; i < n ; i++ ) cout<<arr[i]<<" "; 

}