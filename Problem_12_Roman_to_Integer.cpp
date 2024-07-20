##******** PROBLEM 12 **********

## ROMAN TO INTEGER (LEETCODE 13)

class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int j=s.length()-1;
        int prev = 1;
        int ans=0;
        while(j>=0){
            char ch = s[j];
            if(mp[s[j]]>=prev){
                ans=ans+mp[s[j]];
                prev=mp[s[j]];
            } 
            else{
                ans=ans-mp[s[j]];
            }
            j--;
        }
        return ans;
    }
};

## T.C :- O(N);
## S.C :- O(1);
