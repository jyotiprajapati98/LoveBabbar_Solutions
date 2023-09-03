class Solution {
public:
    string countAndSay(int n, string s = "1") {
        if(n==1){
            return s; //base case
        }

        //for others
        int i=0,j;
        string ans=""; //empty 
        while(i<s.size()){
            //Here i start from 0 index
            j = i; // j = current position
            while(i<s.size() && s[i] == s[j]){
                i++; //increment the i 
            }

            //update the answer
            ans = ans + to_string(i-j) + s[j];
        }

        //call recursively 
        return countAndSay(n-1, ans);
    }
};
