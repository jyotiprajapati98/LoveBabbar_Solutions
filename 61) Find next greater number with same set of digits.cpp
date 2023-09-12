//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int N, vector<int> arr){
        /*
        Steps to solve
        1) Find longest non-incresing sequence suffix
        2) Find the pivot
        3) Find the rightmost successor of pivot
        4) Swap right most successor and pivot value
        5) Reverse the suffix sequence
        */
        
        int pivot = -1;
        
        //step 2
        for(int i=N-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                pivot = i;
                break;
            }
        }
        
        if(pivot == -1){
            reverse(arr.begin(), arr.end());
            return arr;
        }
        
        for(int i=N-1; i>pivot; i--){
            if(arr[i]>arr[pivot]){
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        
        reverse(arr.begin()+pivot+1, arr.end());
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
