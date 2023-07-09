
#include <iostream>
using namespace std;

int main(){
    int n;
    int prime = true;
    
    cout<<"enter number to check prime - ";
    cin>>n;
    if(n<2){
        prime = false;
    }else{
        for(int i = 2; i<n/2; i++)//we can use n/2 to redunce number of operation 
        {
            if(n%i == 0){
                prime = false;
                break;
            }
        }
    }
    
    string ans = prime ? "prime":"not prime";
    cout<<"number is "<<ans;
    
    return 0;
}
