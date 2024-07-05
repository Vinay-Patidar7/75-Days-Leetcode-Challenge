## ******* PROBLE 5 ********

## MAXIMUM SUBARRAY (LEETCODE 53)


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0];
        if(nums.size()==1)
        {
            return nums[0];
        }
        int maxe=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            maxe=max(nums[i],nums[i]+maxe);
            res=max(res,maxe);
        }
        return res;
    }
};


## T.C :- O(N);
## S.C :- O(1);
