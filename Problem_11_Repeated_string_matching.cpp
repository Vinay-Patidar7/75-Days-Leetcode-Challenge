##******** PROBLEM 11 ***********

## REPEATED STRING MATCHING (LEETCODE 686)

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int lenb = b.length();
        int lena = a.length();
        int n = lenb/lena;
        
        string na = "";
        int cnt=n;
        while(cnt--){
            na = na+a;
        }
        if(na.find(b)!= string::npos){
            return n;
        }
        na=na+a;
        if(na.find(b)!=string::npos){
            return n+1;
        }
        na=na+a;
        if(na.find(b)!=string::npos){
            return n+2;
        }
        return -1;
    }
};
  
## T.C :- O(N*M);
## S.C :- O(N+M);
