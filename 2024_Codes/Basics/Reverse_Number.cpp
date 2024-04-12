#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//function for reverse number 
int reverse(int n){
    int rev = 0;
    while(n>0){
        rev = rev * 10 + n % 10;
        //cout<<rev<<endl;
        n = n/10;
        //cout<<n<<endl;
    }
    return rev;
    
}

//main method
int main(){
    int n;
    
    cout<<"enter number to reverse : ";
    cin>>n;
    cout<<"reversed number is : "<<reverse(n);

    return 0;
}
