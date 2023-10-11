//Remove Consecutive Characters with while loop
#include <bits/stdc++.h> 
using namespace std; 

//Method for removing consecutive charecter 
    string removeConsecutiveCharacter(string S){
        //calculate size of string
        int len = S.length();
        string st = "";
        int i=0, j = 0;
        
        while(j<len){
            if(S[i]==S[j]){
                //skip by incrementing j
                j++;
            }else if(S[i] != S[j] || j == len-1){
                st += S[i]; //append the charecters 
                i=j;
                j++;
            }
        }
        
        st += S[j-1];
        return st;
    }

//main method
int main() { 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 
