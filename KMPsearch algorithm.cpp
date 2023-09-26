#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void preprocessLPS(char* pat, int M, int* lps);

//KMPsearch  method
void KMPsearch(char* pat, char* txt){
    cout<<"Method call";
    //lenth of text and pattern
    int M = strlen(pat);
    int N = strlen(txt);
    //array to hold the longest prefix and suffix
    int lps[M]; // The length will same as the pattern
    
    //Pattern preprocessing for LPS array
    preprocessLPS(pat, M, lps);
    
    //index for text and pattern
    int i=0;
    int j=0;
    while((N-i) >= (M-j)){
        //if length of text is grater than pattern length
        if(pat[j] == txt[i]){
            //if the indexs are same
            j++;
            i++;
        }
        
        //if length and index of pattern is same
        if(j == M){
            printf("Found pattern at index %d ", i - j);
            j = lps[j-1];
        }
        //in case of mismatch
        else if(i<N && pat[j] != txt[i]){
            if(j != 0){
                j = lps[j-1];
            }else{
                i = i+1;
            }
        }
    }
}


//method to preprocess the pattern to generate the lps
void preprocessLPS(char* pat, int M, int* lps){
    int len = 0;
    lps[0] = 0; //lps[0] will alwasy be 0
    
    //lps[i] for i = 1 to M-1
    int i=1;
    while(i<M){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }//if not same 
        else{
            //here pat[i]!=pat[len]
            
            //check the length first
            if(len != 0){
                len = lps[len-1];
            }else{
                lps[i] = 0; //if pattern length is 0
                i++;
            }
        }
    }
}

int main(){
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB"; //pattern
    //call method
    KMPsearch(pat, txt);
    return 0;
}
