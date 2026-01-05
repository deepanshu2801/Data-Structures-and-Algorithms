#include <iostream>
using namespace std ;


int main()
{
    int arr[] = {4,2,1,3,5,4};
    int n = sizeof(arr)/sizeof(int) ; 

   for(int i = 0 ;  i < n -1; i++)
   {
        int minIdx = i ; 

        for(int j =  i+1  ; j < n ; j++ )
        {
            if(arr[minIdx] > arr[j]) ; minIdx = j ; 
        }

        swap(arr[minIdx] , arr[i]) ; 
   }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i] ;
    }
}