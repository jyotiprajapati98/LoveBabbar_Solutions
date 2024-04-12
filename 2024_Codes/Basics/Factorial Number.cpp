
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int facto(int n){
    //base conditions 
    if(n==0){
        return 1;
    }else{
        return n*facto(n - 1); // use the formula n*(n-1)
    }
}
int main(){
    int num;
    int sum = 1;
    cout<<"Enter a number to calculate factorial number : ";
    cin>>num;
    
    //call fact method
    
    int fact =  facto(num);
    cout<<"Factorial of "<<num<< " is : "<< fact;
    
    //factorial starts
    /*
    if(num==0){
        cout<<"number is insufficient";
    }else if(num == 1){
        cout<<"Factorial is 1";
    }else{
        while(num>0){
            sum = sum * num;
            //cout<<"sum is: "<<sum;
            num = num - 1;
        } 
    }
    
    cout<<"Factorial of "<<num<< " is :"<< sum;
    */

    return 0;
}
