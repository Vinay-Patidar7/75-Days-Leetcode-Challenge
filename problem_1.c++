##****** PROBLEM 1 ******

##CONCATENATION OF ARRAY (LEETCODE 1929)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};


##T.C :- O(N)
##S.C ;- O(1)
