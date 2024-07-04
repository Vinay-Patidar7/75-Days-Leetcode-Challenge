## ****** PROBLEM 4 *******

## PASCALS'S TRIANGLE (LEETCODE 118)


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i=1;
        vector<vector<int>>ans;
        vector<int>v;
        for(int i=1;i<=numRows;i++){
            if(i==1) {
                v.push_back(1);
            }
            else if(i==2) {
                v.push_back(1);
                v.push_back(1);
            }
            else{
                auto a = ans[i-2];
                v.push_back(1);
                for(int i=1;i<a.size();i++){
                    v.push_back(a[i-1]+a[i]);
                }
                 v.push_back(1);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};

## T.C :- O(N^2)
## S.C :- O(N^2)
