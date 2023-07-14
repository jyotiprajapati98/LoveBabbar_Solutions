class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int todaySold = 0;
        int min = INT_MAX;

        //loop to traverse
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < min){
                min = prices[i]; // if price less than min then update min
            }

            //now check for current sold
            todaySold = prices[i] - min;
            if(profit < todaySold){
                profit = todaySold;
            }
        }
        return profit;
        
    }
};
