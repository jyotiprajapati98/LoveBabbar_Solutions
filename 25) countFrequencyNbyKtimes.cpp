// A C++ program to print elements with count more than n/k
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//Function to find all elements in array that appear more than n/k times.
int countOccurence(int arr[], int n, int k) {
    unordered_map<int, int> freMap;
    int cnt = 0;
        
    for(int i=0; i<n; i++){
        freMap[arr[i]]++;
    }
        
    //traverse and check the map
    for(auto i:freMap){
        if(i.second>(n/k)){
            cnt++;
        }
    }
    return cnt;
}

//main method
int main() {
    int arr[] = {1,2,3,1,4,5,1,3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<countOccurence(arr, size);
    return 0;
}
