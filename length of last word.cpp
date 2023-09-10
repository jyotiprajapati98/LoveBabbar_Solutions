class Solution {
public:
    int lengthOfLastWord(string s) {
        int N =  s.size()-1;
        int f = 0;
        int cnt = 0;
        
        for(int i=N; i>=0; i--){
            if(s[i] == ' ' && cnt){
                return cnt;
            }

            if(s[i]!=' '){
                cnt++;
            }
        }

        return cnt;
    }
};
