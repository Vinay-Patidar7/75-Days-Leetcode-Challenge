## ********* PROBLEM 2 *********

## SHUFFLE THE ARRAY (LEETCODE 1470)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};

## T.C :- O(N)
## S.C :- O(N)
