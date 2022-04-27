/*Program 1 --> Reverse Array in C++ DSA lOVE Babbar*/
#include <iostream>
using namespace std;
void reverse(int arr[],int n){
	int start =0, end = n-1;
	while(start<end){
		int temp = arr[start];
		arr[start]= arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void arrayPrinting(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter the array size -->";
	cin>>n;
	int arr[n];
	int length = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++){
		cout<<"value "<<i << "->";
		cin>>arr[i];
	}
	cout<<"Original array values"<<"\n";
	arrayPrinting(arr,length);
	cout<<"\n"<<"Reverse array values"<<"\n";
	reverse(arr,length);
	
	arrayPrinting(arr,length);
	return 0;
}
