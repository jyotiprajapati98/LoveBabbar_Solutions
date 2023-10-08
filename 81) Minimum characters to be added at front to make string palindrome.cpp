/******************************************************************************
Minimum characters to be added at front to make string palindrome

Solve with 2 pointer approach
*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;

//method
int addMinFrontChar(string str){
    int N = str.length();
    
    //start and end is indicator or pointers 
    int start = 0;
    int end = N-1;
    int result = 0;
    
    while(start < end){
        if(str[start] == str[end]){
            start++;
            end--;
        }else{
            result++;
            start = 0;
            end = N - result - 1;
        }
    }
    
    //return result
    return result;
    
}

int main(){
    string str = "AACECAAAA";
    cout<<addMinFrontChar(str)<<endl;
    return 0;
}
