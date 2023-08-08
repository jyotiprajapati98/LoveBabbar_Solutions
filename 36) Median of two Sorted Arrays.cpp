#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMedian(int a[], int b[], int n, int m){
    int i=0;
    int j=0;
    int cnt;
    int m1 = -1, m2 = -1;
    for(cnt = 0; cnt<=(n+m)/2; cnt++){
        m2 = m1;
        if(i != n && j != m){
            m1 = (a[i]>b[j]) ? b[j++] : a[i++];
        }else if(i<n){
            m1 = a[i++];
        }else{
            //if j<m then
            m1 = b[j++];
        }
    }
    if((m+n)%2==1){
        return m1;
    }else{
        return (m1+m2)/2;
    }
}

int main(){
    int a[] = {900};
    int b[] = {5, 8, 10, 20};
    int len1 = sizeof(a)/sizeof(a[0]);
    int len2 = sizeof(b)/sizeof(b[0]);
    cout<<getMedian(a, b, len1, len2);
    return 0;
}
