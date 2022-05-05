#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	cout<<"array elements are -->  ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

///array sorting 
void sortArray(int arr[], int n){
	int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
 
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
    	if(arr[i]==0){
    		cnt0++;
		}
		if(arr[i]==1){
    		cnt1++;
		}
		
		if(arr[i]==2){
    		cnt2++;
		}
		/*
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        	
        }*/
    }
 
    // Update the array
    i = 0;
 
    // Store all the 0s in the beginning
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
 
    // Then all the 1s
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
 
    // Finally all the 2s
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }

	
	printArray(arr, n);
}

int main(){
	int size;
	cout<<"enter the array size -->";
	cin>>size;
	cout<<"enter the array elements -->\n";
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	printArray(arr, size);
	sortArray(arr, size);
	return 0;
}
