#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
1)Sort the Intervals in incresing order
2)Traverse the whole array
    check if current interval is overlap the previous Interval then
    merge the both Intervals
    otherwise
    skin
*/

//Initialize strcture
struct Interval{
    int first, last;
};

//logic for sorting

bool sortFun(Interval a, Interval b){
    return a.first < b.first;
}

//method for merge interval
void mergeInterval(Interval arr[], int n){
    //sort the interval array
    sort(arr, arr + n, sortFun);
    int idx = 0;
    
    //Traverse into the Interval array
    for(int i=0; i<n; i++){
        if(arr[idx].last >= arr[i].first){
            //merge the intervals
            arr[idx].last = max(arr[idx].last, arr[i].last);
        }else{
            idx++;
            arr[idx] = arr[i];
        }
    }
    
    //store the merge intervals 
    cout<<"intervals after merging"<<endl;
    for(int i=0; i<=idx; i++){
        //print
        cout<< "["<<arr[i].first<<", "<<arr[i].last << "] ";
    }
}

int main(){
    Interval arr[] = {{1,3},{2,4},{6,8},{9,10}};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    //cout<<size;
    
    mergeInterval(arr, size);

    return 0;
}
