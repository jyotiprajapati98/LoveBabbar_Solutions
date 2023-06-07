/*
max subarray from array
*/
#include <limits.h>
#include <iostream>
using namespace std;

int sumSubArray(int a[], int n){
    int currMax = INT_MIN;
    int maxEnd = 0;
    for(int i=0; i<n; i++){
        maxEnd = maxEnd + a[i];
        if(currMax < maxEnd){
            currMax = maxEnd;
        }
        if(maxEnd < 0){
            maxEnd = 0;
        }
    }
    return maxEnd;
}


//main method
int main(){   
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxSum = sumSubArray(arr,size);
    
    cout<<"\naSum of Max Sub Array- "<<maxSum;
    return 0;
}
