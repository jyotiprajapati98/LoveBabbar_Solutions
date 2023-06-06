/*
Array cyclic rotation one time 
*/
#include <iostream>
#include<vector>
using namespace std;
void rotate(int a[], int n){
    int temp = a[n-1];
    for(int i=n-1; i>0;i--){
        a[i] = a[i-1];
    }
    //update arr[0] = arr[n-1]
    a[0] = temp;
}
void printArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

//main method
int main(){   
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"array before rotation - ";
    printArray(arr,size);
    
    rotate(arr,size);
    
    cout<<"\narray after rotation - ";
    printArray(arr,size);
    return 0;
}
