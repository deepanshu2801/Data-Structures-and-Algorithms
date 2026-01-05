#include <iostream>
#include <vector>
using namespace std;

// the time complexity of merge sort is (n log n ) . 
// and space complexity is O(n) . 

// this fucntion is to merge the sorted array   

void merge(int arr[], int start, int mid, int end) 
{
  vector<int> temp ;
  int left = start, right = mid + 1, idx = 0;

// comparing the value form left and right array and adding to the temp vector 
  while (left <= mid && right <= end) 
  {
    if (arr[left] <= arr[right]) temp.push_back(arr[left++]) ;
    else temp.push_back(arr[right++]) ;
  }

//  adding the all remaining value from left or right array. 
  while (left <= mid) temp.push_back(arr[left++]) ;
  while (right <= end) temp.push_back(arr[right++]) ;

// copying sorted value in the origenal array 

  while (start <= end) arr[start++] = temp[idx++];
}

// this function divide the array from mid and call the megre function to merge. 

void merge_sort(int arr[], int start, int end) {
  if (start >= end) {
    return;
  }

  int mid = start + (end - start) / 2;

  merge_sort(arr, start, mid);   // left array
  merge_sort(arr, mid + 1, end); // right array

  merge(arr, start, mid, end); // call to merge
}

int main() {
  int arr[] = {1,5,3,5,8,2};
  int start = 0;
  int end = sizeof(arr) / sizeof(int) -1;
  merge_sort(arr, start, end);

  for (int i = 0; i < end; i++) {
    cout << arr[i] << ", ";
  }

  return 0;
}