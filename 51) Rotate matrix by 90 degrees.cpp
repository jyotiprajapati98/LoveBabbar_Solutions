//Simple approach
#include <iostream>
using namespace std;
int main(){
    int N = 4;
    int mat[N][N] = {{ 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 }};
    
    for(int i=0; i<N; i++){
        for(int j=N-1; j>=0; j--){
            //print columns first because in clockwise the columns will reverse
            cout<<mat[j][i]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
