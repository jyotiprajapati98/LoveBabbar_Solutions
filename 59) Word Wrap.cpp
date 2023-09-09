//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int dp[500][2000];
    
    int wordWrap(int index, vector<int> &nums, int remSpace, int k){
        if(index >= nums.size()){
            return 0; // if numsize is zero
        }
        
        if(dp[index][remSpace] != -1){
            return dp[index][remSpace];
        }
        
        //for result
        int result;
        
        if(nums[index] > remSpace){
            result = (remSpace + 1)*(remSpace+1)+ wordWrap(index+1,nums,k-nums[index]-1,k);
        }
        else{
            int includeline = wordWrap(index+1,nums,remSpace-nums[index]-1,k);
            int excludeline = (remSpace + 1)*(remSpace+1)+ wordWrap(index+1,nums,k-nums[index]-1,k);
            result = min(includeline, excludeline);
        }
        
        dp[index][remSpace] = result;
        return dp[index][remSpace];
    }
    
    int solveWordWrap(vector<int>nums, int k) 
    { 
        //initialize memset
        memset(dp, -1, sizeof(dp)); // set -1 in the dp
        return wordWrap(0, nums, k, k);
    } 
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}
// } Driver Code Ends
