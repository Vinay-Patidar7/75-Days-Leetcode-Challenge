## ****** PROBLEM 7 *******

## REVERSE WOWRDS IN A STRING (LEETCODE 151)

class Solution {
public:
    string reverseWords(string s) {
      string temp="";
      vector<string>ans;
      string res="";

      for(int i=0;i<s.size();i++){
          if(s[i]==' '){
              if(temp.size()>0){
              ans.push_back(temp);
              temp.clear();
              }
          }
          
          else {
              temp.push_back(s[i]);

          }

      }
      if(temp.size()>0) ans.push_back(temp);
      cout<<ans.size();
      for(int i=ans.size()-1;i>=0;i--){
          if(i==0) res += ans[i];
         else  res += ans[i]+' ';
      }
      return res;
    }
};

## T.C :- O(N)
## S.C :- O(N)
