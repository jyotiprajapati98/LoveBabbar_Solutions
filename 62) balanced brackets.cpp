//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x){
        //initialize the stack
        stack<char> stk;
        
        for(int i=0; i<x.length(); i++){
            if(stk.empty()){
                stk.push(x[i]);
            }
            else if( (stk.top() =='(' && x[i] == ')')
                || (stk.top() =='{' && x[i] =='}') 
                || (stk.top() == '[' && x[i] == ']')){
                stk.pop();
            }else{
                stk.push(x[i]);
            }
        }
        
        //again check stack
        if(stk.empty()){
            return true;
        }
        
        return false; //otherwise false
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
