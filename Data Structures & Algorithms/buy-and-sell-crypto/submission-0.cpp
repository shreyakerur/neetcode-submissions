class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = l+1;
        int maxProfit = 0;
        
        while(r<prices.size())
        {
            if(prices[r]>prices[l])
            {
                int profit = prices[r]-prices[l];
                maxProfit = max(maxProfit,profit);
            }
            else
            {
                l=r;
            }
            r++;
        }
        return maxProfit;
    }
};
