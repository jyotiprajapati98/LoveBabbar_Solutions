#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

int allPairs(int arr[], int size, int sum){
    
    //using traditional approach time complexity -> O(n^2)
    /*
    int cnt = 0;
    
    for(int i = 0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] + arr[j] == sum){
                cnt++;
            }
        }
    }
    return cnt;*/
    
    //By using unordered_map to reduce the time compelixty ->O(n)
    
    unordered_map<int, int> map;
    int cnt = 0;
    
    //loop to traverse 
    for(int i=0; i<size; i++){
        if(map.find(sum - arr[i]) != map.end()){
            cnt += map[sum - arr[i]];
            //cout<<"\n";
            //cout<<"cnt"<<cnt <<"\n";
        }
        
        //increment map value
        map[arr[i]]++;
    }
    return cnt;
}

//main method
int main(){
    int arr[] = {1, 5, 7, -1, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;
    
    //call the method
    cout<<"All pairs are - "<<allPairs(arr, size, sum);
    return 0;
}
