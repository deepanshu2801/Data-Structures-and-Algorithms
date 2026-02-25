#include <iostream>
using namespace std ;


void Heapify(int *arr , int size , int idx)
{

    int largest = idx; 
    int left = 2*idx+1; 
    int right = 2*idx+2; 

    if( left < size && arr[left] > arr[largest]) largest = left ; 
    if(right < size && arr[right] > arr[largest]) largest = right; 

    if(largest != idx )
    {
        swap(arr[largest] , arr[idx]) ;
        Heapify(arr, size , largest) ; 
    }
}

void Heapsort(int *arr, int size )
{
    while(size > 0)
    {
        swap(arr[0] , arr[size-1]) ; 
        size--;
        Heapify(arr, size, 0) ;
    }
}

// This is the recursive way to write the heapify function 

// This is the iterative  way to write the heapify function

// void Heapify( int *arr , int size , int idx)
// {
//     int largest = idx ;

//     while( 2*largest +1 < size )
//     {
//         int left = 2*largest+1 ;
//         int right = 2*largest+2 ;

//         if( left < size && arr[left] > arr[largest]) largest = left ; 
//         if(right < size && arr[right] > arr[largest]) largest = right; 

//         if(largest != idx )
//         {
//             swap(arr[largest] , arr[idx]) ; 
//             largest = idx ;
//         } 
//     }

//     return ;

// }



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
    Heapsort(arr, size);
    display(arr, size );
}