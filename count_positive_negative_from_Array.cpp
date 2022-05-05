#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	cout<<"array elements are -->  ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
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
	
	for(int i=0;i<size;i++){
		if(arr[i]>0){
			pos++;
		}
		else{
			neg++;
		}
	}
	cout<<"\npositive -->"<<pos;
	cout<<"\nnegative -->"<<neg;
	return 0;
}
