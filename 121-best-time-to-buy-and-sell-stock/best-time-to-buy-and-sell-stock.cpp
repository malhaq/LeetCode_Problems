class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int price = prices.at(0);
        for(int i =1;i<prices.size();i++){
            profit = max(profit,prices.at(i)-price);
            price = min(price,prices.at(i));
        }
        return profit;

    }
};