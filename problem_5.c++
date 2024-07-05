## ******* PROBLE 5 ********

## MAXIMUM SUBARRAY (LEETCODE 53)

## Kadane's Algorithm
    
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 ;
        int maxi = INT_MIN;
        for(int i = 0 ; i< nums.size() ; i++){
            sum +=nums[i];
            maxi = max(maxi,sum);
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};


## T.C :- O(N);
## S.C :- O(1);
