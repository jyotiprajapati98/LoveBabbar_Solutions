#include <bits/stdc++.h>
using namespace std;
/*
//Time Limit Exceeded
bool find3Numbers(int A[], int n, int X){
        
    for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    int sum = A[i] + A[j] + A[k];
                    if(sum==X){
                        return true;
                    }else{
                        continue;
                    }
                }
            }
        }
        return false;
        
}*/

//By using unordered_set
bool find3Numbers(int A[], int n, int X){
    //unordered_set
    for(int i=0; i<n-2; i++){
        unordered_set<int> uset;
        int localSum = X - A[i]; // take the first element and subtract
        for(int j=i+1; j<n; j++){
            if(uset.find(localSum - A[j]) != uset.end()){
                return true;
            }
            uset.insert(A[j]);
        }
    }
    return false;
}

//Main method
int main(){
    int arr[] = {1, 4, 45, 6, 10, 8}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int K = 13;
    
    //call method
    find3Numbers(arr, n, K);
    return 0;
}

