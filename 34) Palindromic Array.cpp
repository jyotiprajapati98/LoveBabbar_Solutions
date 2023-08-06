//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
bool checkNum(string &str){
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (str[i] != str[len - 1 - i])
            return false;
    }
    return true;
}

int PalinArray(int a[], int n){
    
    	for(int i=0; i<n; i++){
    	    string str = to_string(a[i]);
    	    if(!checkNum(str)){
    	        return false;
    	    }
    	    
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
