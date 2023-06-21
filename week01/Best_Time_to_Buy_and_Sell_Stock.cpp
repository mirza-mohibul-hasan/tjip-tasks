//TC: O(N)
//MC: O(N)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowestPrice = prices[0];
    int profit = 0;
    for (int i = 0; i< prices.size(); i++)
    {
        if(prices[i]<lowestPrice){
            lowestPrice = prices[i];
        }
        if(prices[i]-lowestPrice > profit){
            profit = prices[i]-lowestPrice;
        }
    }
    return profit;
    }
};