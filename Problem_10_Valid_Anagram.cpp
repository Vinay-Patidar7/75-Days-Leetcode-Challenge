##******* PROBLEM 10 *********

## VALID ANAGRAM (LEETCODE 242)


class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash1[26]={0};
        int hash2[26]={0};
        for(int i=0;i<s.length();i++) hash1[s[i]-'a']++;
        for(int i=0;i<t.length();i++) hash2[t[i]-'a']++;
        
        for(int i=0;i<26;i++){
            if(hash1[i]!=hash2[i]) return false;
        }
        return true;
    }
};

## T.C :- O(N)
## S.C :- O(N)
