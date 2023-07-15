#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

bool binarySearch(int arr[], int n, int element){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low + high) /2;
        if(arr[mid] == element){
            return true;
        }else if(arr[mid] > element){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return false;
}

// find common method
void findCommon(int a[], int b[], int c[], int n1, int n2, int n3){
    for(int j=0; j<n1; j++){
        if(j != 0 && a[j] == a[j-1]){
            continue;
        }
        
        if(binarySearch(b, n2, a[j]) && binarySearch(c, n3, a[j])){
            cout<<a[j]<<" ";
        }
    }
}
//main method
int main(){
    int a[] = {1,2,3,4};
    int b[] = {2,3,4,5,6,7};
    int c[] = {3,4,5,6,7,8};

    int i = 0, j=0, k=0;
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);
    int n3 = sizeof(c)/sizeof(c[0]);
    
    /*
    simple approach
    while(i<n1 && j<n2 && k<n3){
        if(a[i] == b[j] && b[j] == c[k]){
            cout<<a[i]<<" ";
            i++;
            j++;
            k++;
        }else if(a[i] < b[j]){
            i++;
        }else if(b[j] < c[k]){
            j++;
        }else{
            k++;
        }
    }*/
    
    findCommon(a,b,c,n1,n2,n3);
    return 0;
}

/*
using vector solution
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
           vector<int> res, vect;
           int i=0, j=0,k=0;
           int cnt = 0;
           
           while(i<n1 && j<n2 && k<n3){
               if(A[i] == B[j] && B[j] == C[k]){
                   vect.push_back(A[i]);
                   i++;
                   j++;
                   k++;
               }else{
                   int cnt = min(A[i], min(B[j], C[k]));
                   if(cnt == A[i]){
                       i++;
                   }else if(cnt == B[j]){
                       j++;
                   }else{
                       k++;
                   }
               }
           }
           
           //push vecter values into the result vector
           for(int x=0; x<vect.size(); x++){
               if(vect[x] != vect[x+1]){
                   res.push_back(vect[x]);
               }
           }
           return res;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends

*/
