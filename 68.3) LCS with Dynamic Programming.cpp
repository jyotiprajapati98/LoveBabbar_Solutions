#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

//LCS with memoization
int DP_LCS(char* s1, char* s2, int M, int N, vector<vector<int> >& dp){
    if(M==0 || N==0){
        return 0;
    }
    
    if(s1[M-1] == s2[N-1]){
        return dp[M][N] = 1 + DP_LCS(s1, s2, M-1, N-1, dp);
    }
    
    if(dp[M][N] != -1){
        return dp[M][N];
    }
    
    //otherwise return max
    return max(DP_LCS(s1, s2, M, N-1, dp), DP_LCS(s1, s2, M-1, N, dp));
}

//main method
int main(){
    char s1[] = "AGGTAB";
    char s2[] = "GXTXAYB";
    
    //check the length
    int M = strlen(s1);
    int N = strlen(s2);
    
    vector<vector<int>> DP(M+1, vector<int>(N+1, -1)); //initialize with -1
    cout<<"length of LCS is "<<DP_LCS(s1, s2, M, N, DP);
    return 0;
}
