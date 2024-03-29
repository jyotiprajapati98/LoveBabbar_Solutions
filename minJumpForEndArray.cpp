/*using greedy approach */
#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
	if (n <= 1){
	    return 0;
	}
	if (arr[0] == 0)
		return -1;

	int maxReach = arr[0];
	int steps = arr[0]; 
	int jumps = 1;

	for (int i = 1; i < n; i++) {
		if (i == n - 1) // lower and higher index is same
			return jumps;
		maxReach = max(maxReach, i + arr[i]);
		steps--;
		if (steps == 0) { 
			jumps++;
			if (i >= maxReach) // If the current index is greater than the maximum index that can be reached,
				return -1;
			steps = maxReach - i;
		}
	}
	return -1; 
}

int main(){
	int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
	int n = sizeof(arr) / sizeof(int);
	cout << "minimum jump needed to reach end of the array -> " <<minJumps(arr, n) << endl;
	return 0;
}

// This code is contributed by Vaibhav Saroj
