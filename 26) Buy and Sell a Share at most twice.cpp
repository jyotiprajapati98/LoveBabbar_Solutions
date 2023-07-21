//Tabulation approach for solve this problem
class Solution {
  public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //initialize vector 2x3
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (2, vector<int>(3, 0)));

        //traverse
        for(int index = n-1; index >= 0; index--){
            for(int buy=0; buy<=1; buy++){
                for(int cap = 1; cap<=2; cap++){
                    if(buy == 1){
                        //Memoized before returning 
                        dp[index][buy][cap] = max(-prices[index] + dp[index+1][0][cap], 0 + dp[index+1][1][cap]);
                    }else{
                        dp[index][buy][cap] =  max(prices[index] + dp[index+1][1][cap - 1],0 + dp[index+1][0][cap]);
                    } 
                }
            }
        }
        //call method
        return dp[0][1][2];    
    }
};

//With memorization approach - 2
/*
class Solution {

//use dp matrix here carry by reference
int fun(int index, int buy, int cap, vector<int> &prices, int n, vector<vector<vector<int>>> &dp){
    if(index == n|| cap == 0){
        return 0;
    }
    
    //check dp case
    if(dp[index][buy][cap] != -1){
        return dp[index][buy][cap];
    }
    if(buy == 1){
        //Memoized before returning 
        return dp[index][buy][cap] = max(-prices[index] + fun(index+1, 0, cap, prices, n, dp),0 + fun(index+1, 1, cap,prices, n, dp));
    }

    return dp[index][buy][cap] =  max(prices[index] + fun(index+1, 1, cap - 1, prices, n, dp),0 + fun(index+1, 0, cap,prices, n, dp));
}  
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //To manage the TLE
        
        //vecter 2x3
        vector<vector<vector<int>>> dp(n, vector<vector<int>> (2, vector<int>(3, -1)));
        //call method
        //func(0, initial buy, cap, prices, vecter size)
        return fun(0, 1, 2, prices, n, dp);    
    }
};
*/

//Time limit exceeded with recursion apporach
/*
class Solution {
int fun(int index, int buy, int cap, vector<int> &prices, int n){
    
    //Time limit exceeded
    if(index == n|| cap == 0){
        return 0;
    }

    if(buy == 1){
        return max(-prices[index] + fun(index+1, 0, cap, prices, n),0 + fun(index+1, 1, cap,prices, n));
    }

    return max(prices[index] + fun(index+1, 1, cap - 1, prices, n),0 + fun(index+1, 0, cap,prices, n));
}  
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        //call method
        //func(0, initial buy, cap, prices, vecter size)
        return fun(0, 1, 2, prices, n);    
    }
};
*/
