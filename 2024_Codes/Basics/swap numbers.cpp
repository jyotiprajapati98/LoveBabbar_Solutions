#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping a and b is: "<< a<<","<<b <<endl;
}
int main(){
    int a=2, b=3;
    cout<<"before swapping a and b is: "<< a<<","<<b <<endl;
    swap(a, b);
    return 0;
}
