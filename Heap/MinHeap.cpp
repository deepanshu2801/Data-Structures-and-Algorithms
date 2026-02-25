#include <iostream>
using namespace std ; 


class MinHeap
{
    int *arr ;
    int size ; 
    int MinHeapSize ; 
    public:
    MinHeap(int n)
    {
        MinHeapSize = n ; 
        arr = new int[0] ; 
        size = 0 ; 
    }

    void insert(int value )
    {
        if(size == MinHeapSize) 
        {
            cout<<"Heap overflow\n"; 
            return ; 
        }

        cout<<value<<" is insertd into the heap\n";
        arr[size] = value ;
        int idx = size ;  
        size++ ;
        
        
        while(arr[idx] < arr[(idx-1)/2] && idx > 0 )
        {
            swap(arr[idx] , arr[(idx-1)/2]) ;
            idx = (idx-1)/2 ; 
        }

    }

    void Heapify(int idx)
    {
        int smallestValueIdx = idx ;
        int left = 2*idx+1 ;
        int right = 2*idx+2; 

        if(smallestValueIdx != idx)
        {
            swap(arr[smallestValueIdx] , arr[idx]) ; 
            Heapify(smallestValueIdx) ; 
        }
    }

    void Delete()
    {
        if(size == 0) 
        {
            cout<<"Heap underflow\n" ; 
            return ; 
        }

        arr[0] = arr[size -1] ; 
        size-- ; 

        if(size == 0 )
        {
            return ; 
        }

        Heapify(0) ; 
    }

    void display()
    {
        cout<<"MinHeap : ";
        for(int i = 0 ; i < size ; i++) 
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl ; 
    }

};


int main()
{
    MinHeap H(10) ;
    H.insert(10) ;
    H.insert(5) ;
    H.insert(7) ;
    H.insert(3) ;
    H.insert(2) ;
    H.insert(20) ;
    H.insert(30) ;
    H.insert(50) ;
    H.display() ;
    H.Delete() ;
    H.display() ;   
}