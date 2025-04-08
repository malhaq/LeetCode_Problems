class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int price = prices[0];
        int len =prices.size();
        for(int i =0;i<len;i++){
            profit = max(profit,prices[i]-price);
            price = min(price,prices[i]);
        }
        return profit;

    }
};