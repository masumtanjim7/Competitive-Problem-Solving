#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    a=i;
                    b=j;
                }
            }
        }
        return {a,b};
    }
};
int main(){
    Solution s ;
    vector<int> v;
     v={2,7,11,15,22,56,80,20,26};
     vector<int> result= s.twoSum (v, 126);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}





