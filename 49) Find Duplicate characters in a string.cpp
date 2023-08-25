#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void checkDuplicate(string str){
    //solve by using hashing method
    unordered_map<char, int> umap; //first for char- first, int - frequncy
    int len = str.length();
    
    for(int i=0; i<len; i++){
        umap[str[i]]++; // increment the count if charecter is repeat
    }
    
    for(auto ele:umap){
        if(ele.second > 1){
            cout<<ele.first<<", "<<ele.second<<"\n";
        }
    }
}

int main(){
    string str = "hellomydear";
    checkDuplicate(str);
    return 0;
}
