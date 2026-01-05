#include <iostream>
using namespace std ;

int partion( int arr[] , int start , int end )
{
    int position = start ; 

    for( int i = start ; i <= end ; i++) 
    {
        if(arr[i] <= arr[end]) swap(arr[i] , arr[position++]) ;
    }
    return position  - 1 ;
}

void quick_sort(int arr[] , int start , int end ) 
{
    if(start >= end ) return ; 

    int pivit = partion(arr, start , end ) ; 

    quick_sort(arr , start , pivit )  ; // left array 
    quick_sort(arr , pivit + 1 , end ) ; // right array  
}

int main()
{
    int arr[] = {5,6,8,9,2,1} ; 
    int size = sizeof(arr) / sizeof(int) ; 
    int start = 0 , end = size - 1 ;
    quick_sort(arr, start , end ) ;

    for(int i = 0 ; i < size ; i++ )
    {
        cout<<arr[i]<<" " ;
    }
} 