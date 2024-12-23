class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int minp = prices[0];

        int size = prices.size();
        for(int i =1;i<size;i++){
            maxp=max(maxp,prices[i]-minp);
            minp=min(minp,prices[i]);
        }
        return maxp;
    }
};