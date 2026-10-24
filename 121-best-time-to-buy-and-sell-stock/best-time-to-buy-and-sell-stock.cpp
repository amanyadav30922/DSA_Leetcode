class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice =prices[0];
        int n=prices.size();
        int profit=0;
        for(int i=1;i<n;i++){
            profit=max(profit,prices[i]-minprice);
            minprice=min(minprice,prices[i]);
        }
        return profit;
    }
};