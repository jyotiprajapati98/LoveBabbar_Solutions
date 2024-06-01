class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int index = 1; index < s.size(); index++){
            //absolute difference between two value
            sum += abs(s[index-1] - s[index]);
        }

        //return sum
        return sum;
    }
};
