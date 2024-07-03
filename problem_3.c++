## ******** PROBLEM 3 ********

## NUMBER OF GOOD PAIRS (LEETCODE 1512)

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    
    int hash[101]={0};
    for(int i:nums){
        hash[i]++;
    }
    int count=0;
    for(int i=0;i<101;i++){
        if(hash[i]>1) {
            count += hash[i]*(hash[i]-1)/2;
        }
    }
    return count;
    }
};

## T.C :- O(N)
## S.C :- O(N)
