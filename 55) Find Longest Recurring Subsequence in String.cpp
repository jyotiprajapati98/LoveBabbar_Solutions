//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int fun(int i, int j, string &str, string &txt){
	        if(i<0 || j<0){
	            return 0;
	        }
	        
	        if(str[i] == txt[j] && i!=j){
	            return fun(i-1, j-1, str, txt)+1;
	        }
	        //else
	        
	        return max(fun(i-1, j, str, txt), fun(i, j-1, str, txt));
	    }
		int LongestRepeatingSubsequence(string str){
		    int N = str.size();
		    string txt(str.begin(), str.end());
		    return fun(N-1, N-1, str, txt);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
