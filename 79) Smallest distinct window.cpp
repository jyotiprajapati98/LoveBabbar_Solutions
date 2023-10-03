class Solution{
    public:
    int findSubString(string str){
        unordered_set<char> us;
        for(int i=0; i<str.size(); i++){
            us.insert(i);
        }  
        return us.size();
    }
};
