class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int price = prices.at(0);
        int len =prices.size();
        for(int i =1;i<len;i++){
            profit = max(profit,prices.at(i)-price);
            price = min(price,prices.at(i));
        }
        return profit;

    }
};