//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        //sort the array first
        unordered_map<int, int> cnt;
        
        //initialize cnt with 0
        for(int i=0; i<n; i++){
            cnt[i+1] = 0;
        }
        
        //check the frequency
        for(int i=0; i<n; i++){
            cnt[arr[i]]++;
        }
        
        //missing and repetion check
        
        vector<int> res;
        for(auto i:cnt){
            if(i.second == 2){
                res.push_back(i.first);
            }
        }
        
        for(auto i:cnt){
            if(i.second == 0){
                res.push_back(i.first);
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
