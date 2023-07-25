//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x){
        // Your code goes here
        //By using sliding window
        int smallestSub = INT_MAX;
        int left =0;
        int right =0;
        int sum = arr[0];
        while(left<n && right<n){
            if(sum<=x){
                right++;
                sum = sum + arr[right] ;
            }
            else{
                smallestSub = min(smallestSub, right - left + 1);
                sum = sum - arr[left];
                left++;
            }
        }
        return (smallestSub == INT_MAX) ? 0 : smallestSub;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends
