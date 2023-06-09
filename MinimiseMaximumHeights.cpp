/*Solve the question by using Greedy Appraoch*/
#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int minimizeHeight(int a[], int n, int k){
    int maxH = *max_element(a, a+n);
    int minH = *min_element(a, a+n);
    
    int diffH = maxH - minH; // for initial height difference
    int avgH = (maxH + minH)/2;
    
    //loop to traverse and modify the heights in the given array 
    //with respect to avgH
    for(int i=0; i<n; i++){
        if(a[i]<= avgH){
            a[i] += k;
        }else{
            a[i] = a[i] - k;
        }
    }
    
    //let us find the new max and min height from array
    int newMaxH = *max_element(a, a+n);
    int newMinH = *min_element(a, a+n);
    int newDiffH = newMaxH - newMinH;
    
    return (newDiffH > diffH) ? diffH : newDiffH;
    
}
void printArray(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n, k = 6;
    cout<<"Number of elements wanted to insert in array ->";
    cin>>n;
    
    int arr[n];
    
    cout<<"\nEnter array elements:- ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int minDiff = minimizeHeight(arr, n, k);
    cout<<"minimum height difference -> "<<minDiff;
    return 0;
}
