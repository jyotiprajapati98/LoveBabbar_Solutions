#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int a[], int n){
        //naive approach
        /*
        int longest = 0;
        int cnt = 0;
        int last = INT_MIN;
        
        //sort the array
        sort(a, a+n);
        for(int i=0; i<n;i++){
            if(a[i]-1 == last){
                cnt++;
                last = a[i];
            }else if(a[i] != last){
                cnt = 1;
                last = a[i];
            }
            
            longest = max(longest, cnt);
        }
        return longest;*/
        
        //using unorderd_set
        int longest = 1;
        unordered_set<int> unSet;
        for(int i=0; i<n; i++){
            unSet.insert(a[i]);
        }
        
        //check the set values
        for(auto x:unSet){
            if(unSet.find(x-1) == unSet.end()){
                int cnt = 1;
                int ele = x;
                while(unSet.find(ele+1) != unSet.end()){
                    ele += 1;
                    cnt += 1;
                }
                //check max
                longest = max(longest, cnt);
            }
        }
        return longest;
  }

int main()
{
 int  arr[] = {2,4,3,5,6,7};
 int size = sizeof(arr)/sizeof(arr[0]);
 cout<<findLongestConseqSubseq(arr, size);
 return 0;
}
