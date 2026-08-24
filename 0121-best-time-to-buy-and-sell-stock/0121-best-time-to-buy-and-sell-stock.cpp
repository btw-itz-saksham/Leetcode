class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy[100000];
        bestbuy[0]=INT_MAX;
        int n=prices.size();

        for(int i=1;i<n;i++){
            bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
        }

        int maxprofit =0;
        for(int i=0;i<n;i++){
            int currprofit= prices[i]- bestbuy[i];
            maxprofit=max(currprofit,maxprofit);
        }
        return maxprofit ;
    }
};