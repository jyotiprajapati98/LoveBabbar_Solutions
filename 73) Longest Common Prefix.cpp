class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n =  strs.size();
        string result="";

        //sort the string vector
        sort(strs.begin(), strs.end());
        string left = strs[0];
        string right = strs[n-1];

        //for loop
        for(int i=0; i<min(left.size(), right.size()); i++){
            if(left[i] == right[i]){
                result = result + left[i];
            }else{
                return result;
            }
        }

        return result;
    }
};
