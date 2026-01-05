#include <iostream>
using namespace std ;
    int partition( int arr[] , int start , int end )
    {
        int pivit = arr[start] ; 
        int i = start ; 
        int j = end ;
    
          while( i < j )
          {
            while(arr[i] <= pivit) i++ ;
            while(arr[j] > pivit ) j-- ; 
    
            if(i < j ) swap(arr[i] , arr[j]) ; 
          }
    
          swap(arr[start] , arr[j]) ; 
          return j ;
    }
    
    void quick_sort(int arr[] , int start , int end )
    {
        if(start >= end ) return ;
    
        int pivit = partition(arr, start , end ) ; 
    
        quick_sort(arr, start , pivit -1) ;
        quick_sort(arr, pivit + 1 , end ) ; 
    }
    
    int main() {
      int arr[] = {4, 6, 3, 7, 3, 8, 9, 1};
      int end = sizeof(arr) / sizeof(int) - 1, start = 0;
      quick_sort(arr, start, end);
    
      for (int i = 0; i <= end; i++) {
        cout << arr[i] << " ";
      }
      return 0;
    }