#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	cout<<"array elements are -->  ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}



//arrangeNegative
void arrangeNegative(int arr[], int n){
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			if(i!=j){
				swap(arr[i], arr[j]);
			}
			j++;
		}
	}
}

int main(){
	int size;
	int pos=0, neg=0;
	cout<<"enter the array size -->";
	cin>>size;
	cout<<"enter the array elements -->\n";
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	printArray(arr, size);
	arrangeNegative(arr, size);
	printArray(arr, size);
	return 0;
}
