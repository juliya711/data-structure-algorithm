class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit =0; //INITIALIZE TO MAX PROFIT
        for(int price : prices){
            if(price< minPrice){
                minPrice = price; //to find the minimum price to buy the stock
            }
            else{
                maxProfit=max(maxProfit, price - minPrice); //to find the maximum profit by selling the stock at the current price and buying it at the minimum price found so far
            }
        }
        return maxProfit;
    }
};