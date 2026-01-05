#include <iostream>
using namespace std ;

int main()
{
    int arr[] = { 4,2,5,3,6,1,9} ;
    int n = sizeof(arr) / sizeof(int) ; 
    int i , j , temp ;
    for(i = 1 ; i < n ; i++)
    {
        temp = arr[i] ; 
        for( j = i-1 ; j >= 0 && arr[j] > temp  ; j--) arr[j+1] = arr[j] ; 
        arr[j+1] = temp ; 
    }

    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" " ; 
}
