#include <iostream>
using namespace std;
int count(string s, int n){
    int ones= 0, zeros =0;
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='0'){
            zeros++;
        }else{
            ones++;
        }
        
        //check
        if(zeros ==  ones){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string str = "010011";
    int N = str.length();
    int cnt = count(str, N);
    cout<<cnt;

    return 0;
}
