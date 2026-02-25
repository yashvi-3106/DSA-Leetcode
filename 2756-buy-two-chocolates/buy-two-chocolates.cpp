class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallestPrice1 = INT_MAX, smallestPrice2 = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < smallestPrice1){
                smallestPrice2 = smallestPrice1;
                smallestPrice1 = prices[i];
            }else if(prices[i] < smallestPrice2){
                smallestPrice2 = prices[i];
            }
        }
        int total = smallestPrice1 + smallestPrice2;
        if(total <= money) return money - total;
        return money;
    }
};