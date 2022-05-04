/*
#include<iostream>
using namespace std;

//funtion to print array elements
void printArray(int arr[], int length){
	//cout<<"array element are --> "<<endl;
	for(int i=0;i<length;++i){
		cout<<arr[i]<<" ";
	}
}

//swapping 
void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b= temp;
}

//partition function for pivot value selection

int arrayPartition(int arr[], int low, int high){
	int pivot = arr[high];
	int val = (low - 1);
	
	for(int i =low; i<high-1;i++){
		if(arr[i] <= pivot){
			val++;
			//swap the elements
			swap(&arr[val],&arr[i]);
		}
	}
	swap(&arr[val+1],&arr[high]);
	return (val+1);
}

//array sorting function
void QuickSort(int arr[], int low, int high){
	if(low<high){
		//need to select the pivot index value using partition of array
		int pIndex = arrayPartition(arr, low, high);
		QuickSort(arr, low,pIndex-1);
		QuickSort(arr, pIndex + 1, high);
	}
}
//max value of array 
int ArrayMax(int arr[], int length, int key){
	QuickSort(arr,0, length-1);
	return arr[key-1];
}
int main(){
	int size;
	int maxKey, minKey;
	cout<<"Kth max and min element"<<endl;
	cout<<"enter the number of elements wants to store in array -->"<<endl;
	cin>>size;
	int array[size];
	cout<<"array elements"<<endl;
	for(int i=0;i<size;i++){
		cout<<"value of "<<i << "-->";
		cin>>array[i];
	}
	int len = sizeof(array)/sizeof(array[0]);
	printArray(array,len);
	QuickSort(array,0, len-1);
	cout <<"\n Sorted array: \n";
    printArray(array, len);
	

	cout<<endl<<"kth max value of array --> ";
	cin>>maxKey;
	int maxVal = ArrayMax(array, len, maxKey);
	cout<<maxVal;
	
	cout<<endl<<"kth min value of array --> ";
	cin>>minKey;
	int minVal = ArrayMax(array, len, minKey);
	cout<<minVal;
	return 0;
}
*/
#include <stdio.h>
#include<iostream>
#include <algorithm>
using namespace std;



// Function to swap position of elements
void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
// Function to partition the array on the basis of pivot element
int partition(int array[], int low, int high) 
{  
  // Select the pivot element
  int pivot = array[high];
  int i = (low - 1);
  // Put the elements smaller than pivot on the left 
  // and greater than pivot on the right of pivot
  for (int j = low; j < high; j++) 
  {
    if (array[j] <= pivot) 
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

//quick sort
void quickSort(int array[], int low, int high) 
{
  if (low < high) 
  {    

    int pi = partition(array, low, high);    
    // Sort the elements on the left of pivot
    quickSort(array, low, pi - 1);    
    // Sort the elements on the right of pivot
    quickSort(array, pi + 1, high);
  }
}
// Function to print elements of an array
void printArray(int array[], int size) 
{
  for (int i = 0; i < size; ++i) 
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


//max value of array 
int ArrayMax(int arr[], int n, int key){
	quickSort(arr,0, n-1);
	//sort(arr, arr + n);
	return arr[n - key];
}

//max value of array 
int ArrayMin(int arr[], int n, int key){
	quickSort(arr, n-1,0);
	//sort(arr, arr + n);
	return arr[key-1];
} 
// Driver code
int main() 
{
	int size;
	int maxKey, minKey;
  	cout<<"enter the number of elements wants to store in array -->"<<endl;
	cin>>size;
	int array[size];
	cout<<"array elements"<<endl;
	for(int i=0;i<size;i++){
		cout<<"value of "<<i << "-->";
		cin>>array[i];
	}
    int n = sizeof(array) / sizeof(array[0]);
    quickSort(array, 0, n - 1);
    printf("Sorted array in ascending order: \n");
    printArray(array, n);
  
  	cout<<endl<<"kth min value of array --> ";
	cin>>minKey;
	int minVal = ArrayMin(array, n, minKey);
	cout<<minVal;
	
	cout<<endl<<"kth max value of array --> ";
	cin>>maxKey;
	int maxVal = ArrayMax(array, n, maxKey);
	cout<<maxVal;
}
