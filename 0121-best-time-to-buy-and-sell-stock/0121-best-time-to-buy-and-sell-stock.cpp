class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int curr_min=prices[0];
        int maxProfit=-1;
        for(int i=0;i<n;i++)
        {
            int diff=prices[i]-curr_min;
            if(diff>maxProfit) maxProfit=diff;
            if(prices[i]<curr_min) curr_min=prices[i];
        }
        return maxProfit;
    }
};