//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int lessVal = 0, highVal = 0;
        
        for(int i=0; i<n;i++){
            if(arr[i]<=k){
                lessVal++;
            }
        }
        
        //Now to check values grater than k
        for(int j=0; j<lessVal; j++){
            if(arr[j]>k){
                highVal++;
            }
        }
        
        //check the swaps
        int left = 0, right = lessVal - 1, ans = INT_MAX;
        while(right<n){
            ans = min(ans, highVal);
            right++;
            
            if(right<n && arr[right]>k){
                highVal++;
            }
            
            if(left<n && arr[left]>k){
                highVal--;
            }
            
            left++;
        }
        
        return (ans == INT_MAX) ? 0:ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends
