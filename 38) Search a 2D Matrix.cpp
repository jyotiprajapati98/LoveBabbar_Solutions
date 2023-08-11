class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Solve with binary search
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        //for binary search
        int low = 0, high = row*col - 1;

        while(low<= high){
            int mid = low + (high - low)/2;
            //to get the value of mid element
            int mVal = matrix[mid/col][mid%col];

            //check the value is equal to target or not
            if(mVal==target){
                return true;
            }else if(mVal<target){
                low = mid+1;
            }else{
                high = mid - 1;
            }
        }
        return false;

    }
};
