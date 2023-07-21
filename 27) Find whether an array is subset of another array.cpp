//Find whether an array is subset of another array
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    
    //create map
    unordered_map<int, int> set;
    
    //count the frequnecy of array 1
    for(int i=0; i<n; i++){
        set[a1[i]]++;
    }
    
    for(int i=0; i<m; i++){
        if(set[a2[i]] > 0){
            set[a2[i]]--;
        }else{
            return "No";
        }
    }
    return "Yes";
}

//main method
int main() {
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    //call method
    cout<<isSubset(arr1, arr2, n, m);
    
    return 0;
}
