//Transform One String to Another using 
//Minimum Number of Given Operation
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Transform method
int Transform(string A, string B){
    //check the length of string 
    //it must be same for tranformation
    if(A.length() != B.length()){
        return -1;
    }
    
    //use unordered_map to store the Frequency of charecters
    
    unordered_map<char, int> umap;
    int N = A.length();
    
    //For loop to traverse
    for(int i=0; i<N; i++){
        if(umap.count(A[i])){
            //if exist then increment
            umap[A[i]]++;
        }else{
            //the Frequency will be 1 only
            umap[A[i]] = 1;
        }
    }//end of loop
    
    
    //Now check the Frequency of string B 
    //if the Frequency is more than 1 then decrement
    
    for(int i=0; i<N; i++){
        if(umap.count(B[i])){
            umap[B[i]]--;
        }
    }
    
    //here Frequency must be zero
    //otherwise tranformation is not possible
    for(auto ele:umap){
        if(ele.second != 0){
            return -1;
        }
    }
    
    
    //now at the end calculate the minimum no of operations
    //required for tranformation
    
    int i = N-1, j = N-1;
    int result = 0;
    
    while(i >= 0 && j>= 0){
        while(i >= 0 && A[i] != B[j]){
            result++;
            i--;
        }
        i--;
        j--;
    }
    
    //retrun result
    return result;
}
int main(){
    
    string str1 = "EACBD";
    string str2 = "EABCD";
    cout<<"Minimum operationd for transformation - "<<Transform(str1, str2);
    return 0;
}
