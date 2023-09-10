//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int editDistance(string s, string t){
        //calculate the size of both the string 
        int n = s.size(), m = t.size();
        
        //initialize two variables
        int i = 0, j = 0;
        
        //initialize array with size [N+1][M+1]
        int arr[n+1][m+1];
        
        //traverse over the first string
        for(int i = 0;i<=n;i++){
            //store the first string charecters in 0th place, 2nd palce will be empty
            arr[i][0] = i; //
        }
        
        //similary for 2nd string
        for(int i = 0;i<=m;i++){   
            arr[0][i] = i;
        }
        
        //Now check the each charecter
        for(int i = 1;i<=n;i++){
            //for string 1
            for(int j = 1;j<=m;j++){
            //for string 2
            
            //check with if condition
                if(s[i-1]== t[j-1]){
                  arr[i][j] = arr[i-1][j-1];
                }else{
                  arr[i][j] = 1 + min(arr[i-1][j], min(arr[i][j-1], arr[i-1][j-1]));
              }
            }
        }
       return arr[n][m];
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
