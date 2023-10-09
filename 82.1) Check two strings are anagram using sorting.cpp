
#include <bits/stdc++.h>
using namespace std;

//Function is to check whether two strings are anagram of each other or not.
//uisng sorting approach
bool isAnagram(string a, string b){
        
        if(a.length() != b.length()){
           return false;
        }
        
        //if length is same then 
        //sort the strings
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());  
           
        //check the strings
        for(int i=0; i<a.length(); i++){
            if(a[i]!=b[i]){
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
