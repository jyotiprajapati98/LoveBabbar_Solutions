#include<iostream>
#include<string>
#include<cctype>
#include<map>
using namespace std;

int main(){
    //const string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string alpha = "abcdefghijkkmnopqrstuvwxyz";
    map<char,int> alphaMap;
    
    //loop to traverse the string
    for(int i = 1; i <= 26; i++){
        alphaMap[alpha[i-1]] = i;
      //myMap[ tolower( alpha[i-1] ) ] = i; // uncomment for Upper case letter
    }

    string text;
    cout << "Enter text: ";
    getline( cin, text );

    int sum = 0;
    for ( char c : text ){ 
        if ( alphaMap.count(c)){
            sum += alphaMap[c];
        }
    }
    cout << "Sum is alphabets: " << sum;
}
