#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>
using namespace std ;

// brutforce  approch 

vector<vector<int>> ThreeSum1(vector<int>& nums) 
{
    vector<vector<int>> ans  = {};
    int n = nums.size() ;
    for(int i = 0 ; i < n-2 ; i++ )
    {
        for(int j = i+1 ; j < n-1 ; j++)
        {
            for(int k = j+1 ; k < n ; k++)
            {
                int sum = nums[i]+ nums[j]+nums[k] ;

                if( sum == 0 ) 
                {
                    ans.push_back({nums[i], nums[j],nums[k]}) ;
                }
            } 

            cout<<endl;
        }

        cout<<endl;
    }
set<vector<int>> s(ans.begin(), ans.end());
ans.assign(s.begin(), s.end()); 
return ans; 
}

// batter approch 


vector<vector<int>> ThreeSum(vector<int> arr)
{
    sort(arr.begin() , arr.end()) ; 
    vector<vector<int>> ans ;
    for(int i = 0 ; i < arr.size() ; i++)
    {
        for(int j = i + 1 ; j < arr.size() ; i++ )
        {
            int sum = arr[i] + arr[j] ;
            int k= -1; 
            if(sum < 0) k = lower_bound(arr.begin()+j+1 , arr.end()) ; 
            
            else if( sum > 0 ) k = BS(arr, j+1, (-sum)) ;

            else k = BS(arr, j+1, 0 ) ; 

            if(arr[i] + arr[j] + arr[k] == 0 )
            {
                vector<int> nums = {arr[i] , arr[j] , arr[k]} ; 
                sort(nums.begin() , nums.end()) ; 
                ans.push_back(nums) ;

            }
        }
    }
 return ans ;
}

int main()
{
   vector<int> arr = {-1,0,1,2,-1,-4};
   vector<vector<int>> ans = ThreeSum1(arr) ;
   for(int i = 0 ; i < ans.size() ; i++)
   {
        for(int j = 0 ; j < ans[i].size() ; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
   }

}