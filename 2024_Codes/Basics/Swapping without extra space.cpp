#include <iostream>
using namespace std;

int main(){
    
    int a = 10;
    int b = 50;
    
    cout<<"Before swapping a and b is:"<<a << b <<"\n";
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout<<"After swapping a is : "<< a<<" b is  "<<b;
    

    return 0;
}
