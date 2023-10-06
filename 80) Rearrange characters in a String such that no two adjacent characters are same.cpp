/******************************************************************************
Rearrange characters in a String such that no two adjacent characters are same
*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

struct Key{
    int frq;
    char ch;
    
    //pripority queue 
    bool operator< (const Key& k) const{
        return frq < k.frq;
    }
};//close

void rearrangeString(string str){
    int len = str.length();
    
    //check the occurenaces
    int cnt[MAX_CHAR] = {0};
    for(int i=0; i<len; i++){
        //index of charecters
        //cout<<cnt[str[i] - 'a']++;
        cnt[str[i] - 'a']++;
    }
    
    //insert into priority queue
    priority_queue<Key> priQueue; //initialize
    
    for(char c = 'a'; c<='z'; c++){
        int val = c - 'a';
        //cout<<ch - 'a'<<"\n";
        if(cnt[val]){
            //if exist
            priQueue.push(Key{cnt[val], c});//insert into queue
        }
    }
    
    //empty String
    str = "";
    
    Key pre{-1, '#'};
    
    while(!priQueue.empty()){
        Key k = priQueue.top();
        priQueue.pop();
        str = str + k.ch;
        
        
        //if frequnecy is less 
        if(pre.frq > 0){
            priQueue.push(pre);
        }
        
        if(pre.frq > 0){
            priQueue.push(pre);
        }
        
        (k.frq)--;
        pre = k;
    }
    
    if(len != str.length()){
        cout<<"Not possible"<<endl;
    }else{
        cout<<str<<endl;
    }
}


//main method
int main(){
    cout<<"Rearrange characters in a String such that no two adjacent characters are same \n";
    string str = "bbbaa";
    rearrangeString(str);
    return 0;
}
