#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define M 4
#define N 5

void commonElement(int Mat[M][N]){
    unordered_map<int, int> umap;
    
    for(int i=0; i<N; i++){
        umap[(Mat[0][i])] = 1; //initalize with 1
    }
    
    for(int i=1; i<M; i++){
        for(int j=0; j<N; j++){
            if(umap[(Mat[i][j])] == i){
                umap[(Mat[i][j])] = i + 1;
                
                //in case of last row
                if(i==M-1 && umap[(Mat[i][j])] == M){
                    // because here M is row and N is columns
                    cout<<Mat[i][j]<<" ";
                }
            }
        }
    }
}
int main(){
    int Mat[M][N] ={ {1, 2, 1, 4, 0},
        {3, 7, 8, 1, 1},
        {0, 7, 7, 3, 1},
        {8, 1, 2, 7, 9}, };
    
    commonElement(Mat);
    return 0;
}
