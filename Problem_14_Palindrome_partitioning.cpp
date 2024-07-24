##********** PROBLEM 14 ***********

## PALINDROME PARTITIONING (LEETCODE 131)


class Solution {
public:
 vector<vector<string>>ans;
    bool ispalindrome(int start,int end,string s){
        while(start<=end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    void solve(int i,string s,vector<string>&res){
        if(i==s.length()){
            ans.push_back(res);
            return;
        }

        for(int j=i;j<s.length();j++){
            if(ispalindrome(i,j,s)){
                res.push_back(s.substr(i,j-i+1));
                solve(j+1,s,res);
                res.pop_back();
            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<string>res;
        solve(0,s,res);
        return ans;
    }
};

## T.C :- O(n*2^n)
## S.C :- O(N)
