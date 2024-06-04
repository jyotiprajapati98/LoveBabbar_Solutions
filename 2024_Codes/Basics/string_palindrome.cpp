#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
  string str = "acaca";
  int lower = 0;
  int high = str.size()-1; //length -1 

  //loop to traverse
  while(lower < high){
    if(str[lower] != str[high]){
      cout<<"Not a Palindrome";
      break;
    }else{
      cout<<"Palindrome";
      break;
    }
    //increment the lower and decrement the high
    lower++;
    high--;
  }
  return 0;
}
