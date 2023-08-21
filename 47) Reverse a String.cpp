class Solution {
public:
    void reverseString(vector<char>& s) {
        int low = 0;
        int high =  s.size()-1;
        while(low<high){
            //swap(s[low], s[high]); //built in method
            char temp = s[low];
            s[low] = s[high];
            s[high] = temp;
            low++;
            high--;
        }
    }
};
