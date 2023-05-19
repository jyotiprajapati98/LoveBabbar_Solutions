/*
Sort an array of 0s, 1s and 2s | Dutch National Flag problem.
This problem is also the same as the famous “Dutch National Flag problem”. The problem was proposed by Edsger Dijkstra.
*/

#include<iostream>
#include<vector>
using namespace std;

void sort012(int arr[], int len){
    //initialize low and mid on index 0
    int low = 0;
    int mid = 0;
    int high = len - 1;
    
    //start building logic
    //if mid is less than high then only sorting will start
    while(mid<=high){
        switch(arr[mid]){
            //for 0
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            
            //for 1
            case 1:
                mid++;
                break;
                
            //for 2
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }//end switch
    }//end while loop
}

//print array
void printArray(int arr[], int len){
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int len = sizeof(arr)/sizeof(arr[0]);
    //printArray(arr, len);
    sort012(arr,len);
    cout<<"\n Sorted Array"<<endl;
    printArray(arr, len);
    return 0;
}
