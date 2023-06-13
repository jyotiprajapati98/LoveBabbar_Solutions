/*Merge two sorted arrays using extra space */
#include<bits/stdc++.h>
using namespace std;
void mergeArray(long long a[], long long b[], int n, int m){
    long long temp[n+m];
    int i=0;
    int j=0;
    int idx = 0;
    
    while(i<n && j<m){
        if(a[i] <= b[j]){
            temp[idx] = a[i];
            i++;
            idx++;
        }else{
            temp[idx] = b[j];
            j++;
            idx++;
        }
    }
    //if the left id reach to end 
    while(i<n){
        temp[idx++] = a[i++];
    }
    //right side
    while(j<m){
        temp[idx++] = b[j++];
    }
    
    //now fill the temp array values into a and b 
    for(int i=0; i<n+m; i++){
        if(i<n){
            a[i] = temp[i];
        }else{
            b[i-n] = temp[i];
        }
    }
}

//print array 
void printArray(long long arr[], int n){
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
  long long arr1[] = {1, 3, 5,10};
  long long arr2[] = {2,4,9};
  int n = 4, m=3;
  mergeArray(arr1, arr2, n, m);
  
  cout<<"Array 1 after merge -> ";
  printArray(arr1, n);
  cout<<"\n";
  cout<<"Array 2 after merge -> ";
  printArray(arr2, m);
  
  return 0;
}
