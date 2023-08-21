#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
    string str = "abcba";
    int n =  str.size();
    int l = 0, r = n-1;
    while(l<r){
        if(str[l++] == str[r--]){
            cout<<"Palindrome";
            return 0;
        }
    }
    cout<<"Non-Palindrome";
    return 0;
}
