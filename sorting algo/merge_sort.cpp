#include <iostream>
#include <vector>
using namespace std ; 

void merge(int arr[] , int s , int m , int e )
{
    // to store the sorted value.
    vector<int> temp ;
    int l = s , r = m + 1 ;

    // to compare the element both right and left array.
    while(l <= m && r <= e )
    {
        if(arr[l] <= arr[r]) temp.push_back(arr[l++]) ; 

        else temp.push_back(arr[r++]) ; 
    }

    // to add the remaining element into the array
    while(l <= m ) temp.push_back(arr[l++]) ;

    while (r <= e ) temp.push_back(arr[r++]) ; 

    // for copying the sorted value in orignal array. 
    int idx = 0 ; 
    
    while(s <= e )
    {
        arr[s++] = temp[idx++] ; 
    }

    
}

void merge_sort(int arr[] , int start  , int end)
{
    if(start >= end ) return ;

    int mid = start + (end - start ) / 2 ; 

    merge_sort(arr, start , mid  ) ; // left array
    merge_sort(arr, mid+1, end ) ; // right array 

    merge(arr, start , mid , end ) ; 

}

int main()
{
    int arr[] = {5,7,3,8,2,1,4} ;
    int size = sizeof(arr) / sizeof(int) ;  
    int end = size - 1 ;
    int start = 0 ; 
    merge_sort(arr, start , end ) ; 

    for(int i = 0 ; i < end ; i++ )
    {
        cout<<arr[i]<<" " ; 
    }
}

