#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//Kth smallest element is findout by using binary search
int count(vector<int> num, int& mid){
    int cnt = 0;
    for(int i=0; i<num.size(); i++){
        if(num[i] <= mid){
            cnt++;
        }
    }
    return cnt;
}

//kthSmallestMethod
int kthSmallestMethod(vector<int> arr, int& k){
    int low = INT_MAX;
    int high = INT_MIN;
    
    //min and max in vector array
    for(int i=0; i<arr.size(); i++){
        low = min(low, arr[i]);
        high = max(high, arr[i]);
    }
    
    //the kth element  will lie between min and max range
    while(low<high){
        int mid = low + (high-low)/2;
        
        //check the number is less or grater to the mid value
        if(count(arr, mid) < k){
            low = mid + 1; //increment the low
        }else{
            high = mid;
        }
    }
    return low; //because we are searching the smallest element is array
    
}
int main(){
    vector<int> arr{10, 5, 4, 3, 48, 6, 2, 33, 53};
    //int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the Kth number - ";
    cin>>k;

    //call the method
    cout<<"Kth smallest element is "<<kthSmallestMethod(arr,k);
    return 0;
}
