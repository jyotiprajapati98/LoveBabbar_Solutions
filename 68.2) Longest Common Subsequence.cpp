/*
Longest common subsequence or LCS
*/

#include <iostream>
using namespace std;

//recursive LCS method
int recursiveLCS(string str1, string str2, int M, int N){
    if(M==0 || N== 0){
        return 0;
    }
    
    //check the string
    if(str1[M-1] == str2[N-1]){
        //if last one is same
        return 1 + recursiveLCS(str1, str2, M-1, N-1);
    }else{
        return max(recursiveLCS(str1, str2, M, N-1), recursiveLCS(str1, str2, M-1, N));
    }
}

//main method
int main(){
    string S1 = "AGGTAB";
    string S2 = "GXTXAYB";
    int m = S1.size();
    int n = S2.size();
    cout<<"lenth of longest common subsequence lenth is -> "<<recursiveLCS(S1, S2, m, n);
    return 0;
}
