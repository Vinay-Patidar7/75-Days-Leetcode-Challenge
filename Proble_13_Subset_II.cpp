##********** PROBLEM 13 ***********

## SUBSET II (LEETCODE 90)


class Solution {
public:
 set<vector<int>>ans;

 void solve(int i,vector<int>&nums,vector<int>&v){
    if(i>=nums.size()){
        ans.insert(v);
        return;
    }  

    v.push_back(nums[i]);
    solve(i+1,nums,v);
    v.pop_back();
    solve(i+1,nums,v);
    
 }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      sort(nums.begin(),nums.end());
       vector<int>v;
       int i=0;
       solve(i,nums,v);
       map<vector<int>, int> mp;
        for(auto it : ans){
            mp[it]++;
        }

        vector<vector<int>>res;
        for(auto it:mp) res.push_back(it.first);
       return res;
    }
};

## T.C :- O(2^N * N)
## S.C :- O(2^N)
