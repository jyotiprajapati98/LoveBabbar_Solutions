//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        //sort by using extra space
        int extraSpace[N*N]; //Initialize array with N*N size
        int temp = 0;
        
        //traverse the matrix and store elements in array
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++, temp++){
                extraSpace[temp] = Mat[i][j];
            }
        }
        
        //sort the array 
        sort(extraSpace, extraSpace+temp);
        
        //store the sorted array elements in array
        temp = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++, temp++){
                Mat[i][j] = extraSpace[temp];
            }
        }
        
        //return
        return Mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends
