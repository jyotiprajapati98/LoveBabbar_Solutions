#include <iostream>
using namespace std;
int findSum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number to sum: ";
    cin>>n;
    cout << "Sum of number "<< n << ": "<<findSum(n);
    return 0;
}
