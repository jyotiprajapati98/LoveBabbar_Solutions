#include<iostream>
using namespace std;


void arrayPrinting(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void Union(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
 
    /* Print remaining elements of the larger array */
    while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
}
 
int main(){
	int s1,s2;
	cout<<"Enter the array 1 size -->";
	cin>>s1;
	int arr1[s1];
	for(int i=0;i<s1;i++){
		cout<<"value "<<i << "->";
		cin>>arr1[i];
	}
	
	cout<<"\nEnter the array 2 size -->";
	cin>>s2;
	int arr2[s2];
	for(int i=0;i<s2;i++){
		cout<<"value "<<i << "->";
		cin>>arr2[i];
	}
	cout<<"\nArray 1 values"<<"\n";
	arrayPrinting(arr1,s1);
	cout<<"\nArray 2 values"<<"\n";
	arrayPrinting(arr2,s2);
	
	cout<<"\nUnion of arrays"<<"\n";
	Union(arr1, arr2, s1,s2);
	return 0;
}
