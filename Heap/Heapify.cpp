#include <iostream>
using namespace std ; 



void Heapify(int *arr , int size , int idx) 
{
    int largestChildIdx = idx ;
    int left = 2*idx +1 ; 
    int right = 2*idx+2 ; 

    while(left < size)
    {
        

        if(arr[left] > arr[largestChildIdx]) largestChildIdx = left ; 
        if(right < size && arr[right] > arr[largestChildIdx]) largestChildIdx = right ;

        if(largestChildIdx != idx)
        {
            swap(arr[largestChildIdx] , arr[idx]) ;
            idx = largestChildIdx ;
            left = 2*idx +1 ; 
            right = 2*idx+2 ;
        }

        else
        {
            return ; 
        }
    }

}

void HeapSort(int *arr , int size )
{
    while(size > 0)
    {
        swap(arr[0] ,arr[size-1]) ;
        size--;
        Heapify(arr, size , 0 ) ; 
    }
}

void MaxHeap( int *arr , int size )
{
    for( int i = (size/2) -1 ; i >= 0 ; i--)
    {
        Heapify(arr, size , i );

    }

}


void display(int *arr , int size)
{
    cout<<"MaxHeap : ";
    for(int i = 0 ; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}


int main()
{
    int arr[] = {5,7,2,8,9,3,10,20,15} ;
    int size = sizeof(arr)/sizeof(int) ;

    MaxHeap(arr, size);
    display(arr, size) ;
    HeapSort(arr, size) ;
    display(arr, size) ;
}