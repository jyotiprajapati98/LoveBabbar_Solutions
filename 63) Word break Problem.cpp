//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    //static method
    bool static check(string a, string b){
        return a.size() > b.size();
    }
    int wordBreak(string A, vector<string> &B) {
        //sort the string 
        sort(B.begin(), B.end(), check);
        
        int i=0;
        int idx;
        while(i<B.size() && A.size() > 0){
            while((idx = A.find(B[i])) != string::npos){
                A.replace(idx, B[i].size(),"");
            }
            i++;
        }
        
        if(A.size() == 0){
            return 1;
        }
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends
