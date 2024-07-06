##****** PROBLEM 6 *******


## BEST TIME TO BUY AND SELL STOCK (LEETCODE 121)


  class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprof = 0;

        for(int i=1;i<prices.size();i++){
            maxprof = max(maxprof,prices[i]-minprice);
            minprice = min(prices[i],minprice);
        }

        return maxprof;
    }
};


## T.C :- O(N)
## S.C :- O(1)
