#include <iostream>
using namespace std;

void unionSet(int a[], int b[], int n, int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }else if(b[j]<a[i]){
            cout<<b[j++]<<" ";
        }
        else{
            cout<<b[j++]<<" ";
            i++;
        }
    }
    
    //print array a
    while(i<n){
        cout<<a[i++]<<" ";
    }
    
    while(j<m){
        cout<<b[j++]<<" ";
    }
}

//intersection
void intersection(int a[], int b[], int n, int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }else if(b[j]<a[i]){
            j++;
        }else{
            cout<<b[j]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int a[] = {1,2,3};
    int b[] = {1,2,3};
    
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);
    
    //call union method
    cout<<"Union of set is -> ";
    unionSet(a, b, n, m);
    
    cout<<"\nIntersection of set is -> ";
    intersection(a, b, n, m);
    return 0;
}
