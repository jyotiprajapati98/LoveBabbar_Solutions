/*All the subsequences in the given string
using recursion and backtracking 
*/

#include <iostream>
using namespace std;

//allSubsequnces method
void allSubsequnces(string str, int N, int index = -1, string current = ""){
    
    //check the base case
    if(N==index){
        return;
    }
    
    //check the current string is empty or not
    if(!current.empty()){
        //if not empty then print
        cout<<current<<"\n";
    }
    
    //for loop to find the subsequences
    for(int i=index+1; i<N; i++){
        //i start from 1st index
        
        //current string concatenate with string of i
        current += str[i];
        
        //call method recursively 
        allSubsequnces(str, N, i, current); // i = index
        
        //erase the old one 
        current = current.erase(current.size() - 1);
    }
}

//main method
int main(){
    string str = "cab";
    allSubsequnces(str, str.size());
    return 0;
}
