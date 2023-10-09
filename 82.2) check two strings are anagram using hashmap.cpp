
#include <bits/stdc++.h>
using namespace std;

//Function is to check whether two strings are anagram of each other or not.
//uisng sorting approach
bool isAnagram(string a, string b){
        
        if(a.length() != b.length()){
           return false;
        }
        
        //using hash map
        //store charecter as key and occurance as value in map
        
        unordered_map<char, int> umap;
        
        //store the values for string 
        for(int i=0; i<a.length(); i++){
            umap[a[i]]++;
        }
        
        //check the string b with hashmap values 
        for(int i=0; i<b.length(); i++){
            if(umap.find(b[i]) != umap.end()){
                umap[b[i]] = umap[b[i]] - 1;
            }else{
                return false;
            }
        }
        
        
        //now traverse over hashmap 
        //if all the values are 0 then anagram other not
        for(auto val:umap){
            if(val.second != 0){
                return false;
            }
        }
        return true;
    }

int main() {
    int t;
    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
