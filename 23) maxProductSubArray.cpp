#include <bits/stdc++.h>
using namespace std;

//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // using kalbande algorithm
	    long long maxProduct = INT_MIN;
	    long long minEnd = 1;
	    long long maxEnd = 1;
	    
	    for(int i=0; i<n; i++){
            minEnd = minEnd * arr[i];
            maxEnd = maxEnd * arr[n-i-1];
	        maxProduct = max(maxProduct, max(minEnd, maxEnd));
	        if(minEnd==0)
	            minEnd = 1;
	        if(maxEnd==0)
	            maxEnd = 1;
	    }
	    return maxProduct;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
