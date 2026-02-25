#include <iostream>
#include <vector>
using namespace std ; 


// bruteforce approch T.C (n2)
int maxArea(vector<int>& arr) 
{
    int water;
    int maxWater = 0 ; 
    for(int i = 0 ; i < arr.size() ; i++)
    {
        int j = i+1 ;
        while(j < arr.size())
        {
            if(arr[i] <= arr[j])
            {
                water = arr[i] * (j - i ) ; 
                maxWater  = max(water, maxWater) ; 
                j++ ; 
            }

            else if( arr[i] > arr[j]) 
            {
                
                water = arr[j] * (j - i) ; 
                maxWater  = max(water, maxWater) ; 
                j++ ; 
            }
        } 
    }

  return maxWater;
}
int maxWater(vector<int> arr) 
{
    int left = 0 ; 
    int right = arr.size() - 1 ;
    int water = 0 ;
    int maxWater  = 0 ;  

    while(left < right)
    {
        if(arr[left] < arr[right])
        {
            water = arr[left] * (right - left); 
            maxWater = max(water, maxWater); 
            left++;   
        }
        else 
        {
            water = arr[right] * (right - left); 
            maxWater = max(water, maxWater);
            right--;   // ✅ FIXED
        }
    }

    return maxWater; 
}
 

int main()
{
    vector<int> nums ={}  ; 
 
    cout<<maxWater(nums) ;

}