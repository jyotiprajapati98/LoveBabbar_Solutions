class Solution {
  public:
    bool areKAnagrams(string a, string b, int k) {
       if(a.length() != b.length()){
           return false;
        }
        
        //using hash map
        //store charecter as key and occurance as value in map
        
        unordered_map<char, int> umap;
        int cnt = 0;
        
        //store the values for string 
        for(int i=0; i<a.length(); i++){
            umap[a[i]]++;
        }
        
        //check the string b with hashmap values 
        for(int i=0; i<b.length(); i++){
            if(umap[b[i]] > 0){
                umap[b[i]]--;
            }else{
                cnt++;
            }
        }
        
        return cnt<=k?true:false;
    }
};
