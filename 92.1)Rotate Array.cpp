class Solution {
public:
    void reverse(vector<int>& nums, int i, int j){
        int left = i;
        int right = j;

        while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        k = k%N;
        if(k < 0){
            k += N;
        }
        //now reverse operations
        reverse(nums, 0, N - k - 1);
        reverse(nums, N - k, N-1);
        reverse(nums, 0, N - 1);
    }
};
