#include<iostream>
#include<string>
using namespace std;

//define row and columns
#define R 3
#define C 3

//printWords method
void printWords(string str[R][C], int curr, int n, string result[R]){
    
    result[curr] = str[curr][n];
    
    //check the word is last or not
    if(curr == R-1){
        //if last then 
        for(int i=0; i<R; i++){
            cout<<result[i]<< " ";
        }
        cout<<endl;
        return;
    }
    
    //if not the last word then
    for(int i=0; i<C; i++){
        if(str[curr+1][i] != ""){
            printWords(str, curr+1, i, result);
        }
    }
}


//recursivePrint method
void recursivePrint(string str[R][C]){
    string output[R];
    
    //loop to travers the string words
    
    for(int i=0; i<C; i++){
        if(str[0][i] != ""){
            printWords(str, 0, i, output);
        }
    }
}
//main method
int main(){
    //here R and C can be input
    string str[R][C] = {{"you", "we"},
                        {"have", "are"},
                        {"sleep", "eat", "drink"}};
                        
    recursivePrint(str);
    
    return 0;
}
