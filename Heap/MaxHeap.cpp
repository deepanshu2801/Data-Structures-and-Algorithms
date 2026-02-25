#include <iostream>
using namespace std ;

class MaxHeap
{
    int *arr ;
    int size ;  // number for element in the heap
    int MaxHeapSize ; // total size of heap 
    
    public:

        MaxHeap(int n )
        {
            size = 0 ; 
            MaxHeapSize = n ; 
            arr = new int[MaxHeapSize] ; 
        }

        void Heapify(int idx)
        {
            int largest = idx ; 
            int left = 2*idx+1 ;
            int right = 2*idx+2 ;

            if(left < size && arr[left] > arr[largest]) largest = left ;
            if(right < size && arr[right] > arr[largest]) largest = right ;

            if(idx !=largest)
            {
                swap(arr[idx] , arr[largest]) ;
                Heapify(largest) ;
            }
        }


        void insert(int value )
        {
            // checking overflow condition 
                if(size==MaxHeapSize)
                {
                    cout<<"heap overflow\n" ;
                    return ; 
                }

                arr[size] = value ;
                int idx = size ;
                size++ ;
                cout<<value<<" is inserted into the heap\n";

                while(idx > 0 && arr[idx] > arr[(idx - 1)/2])
                {
                    swap(arr[idx] , arr[(idx-1)/2]) ;
                    idx = (idx-1)/2 ;
                }
        }

          void Delete()
        { 
            if(size == 0)
            {
                cout<<"Heap underflow";
                return ; 
            }

            cout<<arr[0]<<" is deleted from the Heap\n" ; 
            arr[0] = arr[size-1] ;
            size-- ; 

            if(size == 0 ) 
            {
                return ;
            }

            Heapify(0);
            
        }


        void display()
        {
           
            cout<<"MaxHeap : ";
            for(int i = 0 ; i < size ; i++ )
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};

int main()
{
    MaxHeap  H(10) ;
    H.insert(50) ;
    H.insert(40) ;
    H.insert(30) ;
    H.insert(20) ;
    H.insert(10) ;
    H.insert(25) ;
    H.insert(24) ;
    H.insert(15) ;
    H.insert(2) ;
    H.insert(5) ;
    H.display() ; 
    H.Delete() ;
    H.display() ;
    H.Delete();
    H.display() ;
    H.Delete();
    H.display() ;
      
      
 
}