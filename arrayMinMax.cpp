#include <iostream>
using namespace std;
struct MinMax{
		int min;
		int max;
};
MinMax getMinMax(int arr[],int n){
		struct MinMax minmax;
		int i;
		
		//condition for one element
		if(n==1){
			minmax.max = arr[0];
			minmax.min = arr[0];
			return minmax;
		}
		//more than one element
		if(arr[0]>arr[1]){
			minmax.max = arr[0];
			minmax.min = arr[1];
		}
		else{
			minmax.max = arr[1];
			minmax.min = arr[0];
		}
		
		for(i=2;i<n;i++){
			if(arr[i]>minmax.max){
				minmax.max = arr[i];
			}
			else if(arr[i]<minmax.min){
				minmax.min = arr[i];
			}
		}
		return minmax;
		
}
int main(){
	//structure
	int arr_size;
	cout<<"Enter the array size -->";
	cin>>arr_size;
	int arr[arr_size];
	
	cout<<"enter the array element -->"<<"\n";
	for(int i=0;i<arr_size;i++){
		cout<<"value of "<<i<<"-->";
		cin>>arr[i];
	}
	
	struct MinMax minmax = getMinMax(arr,arr_size);
	
	cout<<"Minimum element of array -> "<<minmax.min<<endl;
	cout<<"Max element of array -> "<<minmax.max<<endl;
	return 0;
}
