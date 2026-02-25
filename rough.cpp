#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
// brutforce  approch 

// vector<vector<int>> threeSum(vector<int>& nums) 
// {
//     vector<vector<int>> ans  = {};
//     for(int i = 0 ; i < nums.size() ; i++ )
//     {
//         for(int j = i+1 ; j < nums.size() ; j++)
//         {
//             for(int k = j+1 ; k < nums.size() ; k++)
//             {
//                 int sum = nums[i]+ nums[j]+nums[k] ;

//                 if( sum == 0 ) 
//                 {
//                     ans = {nums[i], nums[j],nums[k]}
//                 }
               
//             } 

//             cout<<endl;
//         }

//         cout<<endl;
//     }
//  return ans; 
// }


 vector<vector<int>> threeSum(vector<int>& nums) {
        
          vector<vector<int>> ans = {} ; 
        int i = 0 ;
        while(i < nums.size())
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            int j = i+1 ; 
            int k = nums.size() - 1 ;

            while( j < k )
            {
                if(nums[i] + nums[j] + nums[k] == 0 ) 
                {
                    vector<int> sorted_array = {};
                    if(nums[i] > nums[j] && nums[i] > nums[k])
                    {
                        sorted_array[2] = nums[i]
                    }
                    ans.push_back(sorted_array);
                    j++;
                }

                else if(nums[i] + nums[j] + nums[k] < 0 )
                {
                    j++ ; 
                }

                else k-- ; 
            }
         i++ ;
        } 
    
//     set<vector<int>> s(ans.begin(), ans.end());
//     ans.assign(s.begin(), s.end());  
    return ans;
    }
    

    int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4} ;
    sort(nums.begin() , nums.end() );
    vector<vector<int>> ans =  threeSum(nums) ;
    for(int i = 0; i < ans.size(); i++) {
      for(int j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << endl;
    }
}