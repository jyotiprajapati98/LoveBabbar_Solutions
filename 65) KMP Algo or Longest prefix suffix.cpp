//{ Driver Code Starts
//Initial template for C++ 
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    int n = s.length();
	    
	    int lps[n];
	    //initialize with zero
	    lps[0] = 0;
	    
	    int plen = 0;
	    
	    int i = plen + 1;

	    
	    //traverse over loop
	    while(i<n){
	        if(s[i]==s[plen]){
	            plen++;
	            lps[i] = plen;
	            i++;
	        }else{
	            if(plen != 0){
	                plen = lps[plen-1];
	            }else{
	                //if len == 0
	                lps[i] = 0;
	                i++;
	            }
	        }
	    }
	    
	    //return result
	    //int result = lps[n-1];
	    return lps[n-1];
	    
	}
};

//{ Driver Code Starts.

int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

// } Driver Code Ends
