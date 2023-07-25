//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        /*
        To distribute the array chocolates to m kids. Keep in mind that the difference between the each distributed
        packet will be less or same for fair distribution
        
        Steps
        1) Sort the array in ascending order
        2) Initialize left = 0, right = m - 1
        3) find the min difference between the right most and left values of array
        */
        long long diff = INT_MAX;
        sort(a.begin(), a.end());
        
        int left = 0;
        int right = m-1;
        
        while(left<n && right<n){
            diff = min(diff, a[right++] - a[left++]);
        }
        
        //return the difference
        return diff;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
