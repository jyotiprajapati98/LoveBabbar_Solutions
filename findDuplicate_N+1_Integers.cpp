/*find duplicate in an array of N+1 Integers*/
#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector <int> & arr, int n) {
    int freq[n + 1] = {0}; // empty array with n+1 size
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 0) {
            freq[arr[i]] += 1;
        } else {
            return arr[i];
        }
    }
    return 0;
}
int main() {
  vector <int> arr;
  arr = {1, 1,3,0,2,4};
  int n = arr.size();
  cout << "Duplicate element is -> " << findDuplicate(arr,n) << endl;
}
