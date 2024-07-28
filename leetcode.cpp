// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // 1st approach

        // int min = prices[0];
        // int sum = 0;

        // for(int i=1; i<prices.size(); i++){
        //     if(sum < (prices[i] - min)){
        //         sum = prices[i]-min;
        //     }
        //     if(prices[i] < min){
        //         min = prices[i];
        //     }
        // }
        // return sum;

        //2nd approach

        int minSoFar = prices[0];
        int ans = 0;
        for(int i=1; i<prices.size(); i++){
            int profit = prices[i] - minSoFar;
            if(profit > ans){
                ans = profit;
            }
            minSoFar = min(prices[i], minSoFar);
        }
        return ans;
};