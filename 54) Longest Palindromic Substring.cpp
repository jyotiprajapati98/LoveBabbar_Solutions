class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0){
            return "";
        }

        //use matrix approach
        //mat[i][j] true if index i, j is palindrom
        bool mat[n][n];
        memset(mat, 0, sizeof(mat)); // initialize with zero

        for(int i=0; i<n; i++){
            mat[i][i] = true;
        }

        string ans = "";
        ans = ans + s[0];

        //check
        for(int i = n-1; i>=0; i--){
            for(int j=i+1; j<n; j++){
                if(s[i] == s[j]){
                    if(j-i==1 || mat[i+1][j-1]){
                        mat[i][j] = true;

                        //check longest palindrome
                        if(ans.size() < j-i+1){
                            ans = s.substr(i, j-i+1);
                        }
                    }
                }
            }
        }

        return ans;
    }
};
