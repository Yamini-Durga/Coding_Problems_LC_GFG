https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

int maxProfit(vector<int>& prices) {
        int maxP = 0, minsf = prices[0];
        for(int cur = 0; cur < prices.size(); cur++){
            if(prices[cur] < minsf){
                minsf = prices[cur];
            }
            maxP = max(maxP, prices[cur]-minsf);
        }
        return maxP;
    }
