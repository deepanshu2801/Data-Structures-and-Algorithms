#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std ;

vector<vector<int>> fourSum(vector<int> nums, int target )
{
    int i = 0 ; 
    vector<vector<int>> ans = {}  ; 
    while(i < nums.size())
    {
        int j = i + 1 ; 
        while(j < nums.size())
        {
            int left = j + 1 ; 
            int right = nums.size() - 1 ;

            while(left < right ) 
            {
                if(nums[i] + nums[j] + nums[left] + nums[right] == target)
                {
                   
                    vector<int> sortedArray = {nums[i],nums[j],nums[left],nums[right]};
                    sort(sortedArray.begin() , sortedArray.end()) ; 
                    ans.push_back(sortedArray) ; 
                    left++ ; 
                }

                else if(nums[i] + nums[j] + nums[left] + nums[right] <  target)
                {
                    left++ ; 
                }

                else 
                {
                    right-- ; 
                }
            }

        j++ ; 
        }

    i++ ;
    }
    set<vector<int>> s(ans.begin(), ans.end());
    ans.assign(s.begin(), s.end()); 
    return ans ;
} 

int main() 
{
   vector sum = {1,0,-1,0,-2,2}  ; 
   sort(sum.begin() , sum.end()) ; 
   int target = 0 ; 
   vector<vector<int>> ans =  fourSum(sum , target) ; 

   for(int i = 0 ; i < ans.size() ; i++ )
   {
        for(int j = 0 ; j < ans[i].size() ; j++ )
        {
            cout<<ans[i][j]<<" " ; 
        }
        cout<<endl;
   }
Data-Structures-and-Algorithms/"test
-2 -1 1 2 
-2 0 0 2 
-1 0 0 1 

}