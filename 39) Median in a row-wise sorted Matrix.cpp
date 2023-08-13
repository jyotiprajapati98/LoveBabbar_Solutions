//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int upper_bound(vector<int>&row, int mid){
        int l = 0, h = row.size()-1;
        while(l<=h){
            int m = (l+h)/2;
            if(row[m] <= mid){
                l = m+1;
            }else{
                h = m-1;
            }
        }
        return l;
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here   
        int mini = INT_MAX, maxi = INT_MIN;
        
        //traverse row wise
        for(int i=0; i<r; i++){
            mini = min(mini, matrix[0][i]);
            maxi = max(maxi, matrix[i][c-1]);
        }
        
        //define the assumption element
        int left = mini, right = maxi;
        int pos = (r*c+1)/2;
        
        //check using while loop
        while(left <= right){
            //calculate mid for binary search suing lowest and highest element
            int mid = (left + right)/2;
            int place = 0;
            int cnt = 0;
            
            //check and count the smaller elements then mid
            for(int i=0; i<r; i++){
                cnt = upper_bound(matrix[i], mid);
                place = place + cnt;
            }
                
            if(place < pos){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return left;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends
