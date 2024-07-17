##****** PROBLEM 9 *******

## LOWEST COMMON PREFIX (LEETCODE 14)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string ans="";
        int i=0;
        while(true)
        {
            bool flag = true;
            char ch='*';
            for(auto it:strs){
                if(i>=it.length()) return ans;
                if(flag){
                if(i>=it.length()) break;
                 ch = it[i];
                 flag =false;
                }
                else{

                    if(i<it.length()){
                        if(ch!=it[i]) return ans;

                    }
                }
            }
            if(ch!='*' )
            ans+=ch;
            i++;
            if(i>=strs[0].length()) break;
        }
        return ans;
    }
};

## T.C :- O(N*M)
## S.C :- O(1)
