#include <iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& arr){
    for(auto i:arr){
        cout<<i<<" ";
    }
}

void reverse(vector<int>& nums, int i, int j){
        int left = i;
        int right = j;

        while(left < right){
            int temp = nums[left];
            cout<<"\ntemp -> "<<temp;
            nums[left] = nums[right];
            cout<<", nums[left] -> "<<nums[left];
            nums[right] = temp;
            cout<<", nums[right] -> "<<nums[right];

            left++;
            right--;
        }
}
vector<int> rotate(vector<int>& nums, int k) {
        int N = nums.size();
        k = k%N;
        if(k < 0){
            k += N;
        }
        //now reverse operations
        reverse(nums, 0, N - k - 1);
        cout<<"\nafter first iteration"<<endl;
        printVector(nums);
        reverse(nums, N - k, N-1);
        cout<<"\nafter 2nd iteration"<<endl;
        printVector(nums);
        reverse(nums, 0, N - 1);
        cout<<"\nafter 3rd iteration"<<endl;
        printVector(nums);
        return nums;
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    int K = 3;
    cout<<"Actual Array -"<<endl;
    printVector(nums);
    vector<int> result = rotate(nums, K);
    cout<<"\nafter k times"<<endl;
    printVector(result);
    /*
    for(auto i:result){
        cout<<i<<" ";
    }*/
    return 0;
}
