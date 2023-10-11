class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int minimum_price=prices[0];
        int k=0, maximum_price=0;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            minimum_price=min(minimum_price,prices[i]);
            profit=prices[i]-minimum_price;
            maximum_price=max(maximum_price,profit);
        }
        return maximum_price;
    }
};