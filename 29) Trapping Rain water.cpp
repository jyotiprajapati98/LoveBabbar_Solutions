class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();

        //we will make two auxilary vectors for left and right side
        int leftArr[len];
        int rightArr[len];
        int waterBlocks = 0;

        leftArr[0] = height[0]; //it will start from o index
        rightArr[len-1] = height[len-1]; // it will start from last index

        for(int i=1; i<len; i++){
            leftArr[i] = max(leftArr[i-1], height[i]);
        }

        //for right side
        for(int j = len-2; j>=0; j--){
            rightArr[j] = max(rightArr[j+1], height[j]);
        }

        for(int i=0; i<len; i++){
            waterBlocks = waterBlocks + min(leftArr[i], rightArr[i]) - height[i];
        }

        return waterBlocks;
    }
};
