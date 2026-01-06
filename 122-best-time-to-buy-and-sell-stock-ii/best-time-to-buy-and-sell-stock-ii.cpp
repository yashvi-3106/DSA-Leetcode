class Solution {
public:
    int maxProfit(vector<int>& prices){
        int sum=0;
        for(int i = 0 ; i < prices.size()-1 ; i++){
            if(prices[i+1] > prices[i]){
                int profit = prices[i+1] - prices[i];
                sum += profit;
            }
        }
        return sum;
    }
};

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int max = 0;
//         int startPrice = prices[0];
//         for(int i = 1; i < prices.size(); i++){
//             if(startPrice < prices[i]){
//                 max += prices[i] - startPrice;
//             }
//             startPrice = prices[i];
//         }
//         return max;
//     }
// };