#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool subArrayExists(int arr[], int n){
        unordered_map<int, int> subMap;
        int summation = 0;
        //loop to traverse
        for(int i=0; i<n; i++){
            summation = summation + arr[i];
            if(summation == 0){
                return true;
            }
            //now use check sum
            if(subMap.find(summation) != subMap.end()){
                return true;
            }
            
            subMap[summation] = i;
        }
        
        return false;
        
        
        //Naive approach with for loops
        // time limit exceeded here
        /*
        for(int i=0; i<n;i++){
            int sum = arr[i];
            if(sum == 0){
                return true;
            }
            for(int j = i+1; j<n; j++){
                sum = sum + arr[j];
                if(sum == 0){
                    return true;
                }
            }
        }
        return false;
        */
        //Use 
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
