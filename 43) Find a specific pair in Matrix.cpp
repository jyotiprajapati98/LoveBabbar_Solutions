#include <iostream>
using namespace std;
#define N 5

int getMaxDiff(int mat[][N]){
    
    //The condition to solve this is mat(c,d) - mat(a,b)
    //Where c>a, d>b
    int maxDiff = 0;
    
    for(int a = 0; a<N-1; a++){
        for(int b = 0; b<N-1; b++){
            for(int c = a+1; c<N; c++){
                for(int d=b+1; d<N; d++){
                    //check the value 
                    if(maxDiff < mat[c][d] - mat[a][b]){
                        maxDiff = mat[c][d] - mat[a][b];
                    }
                }
            }
        }
    }
    return maxDiff;
}

int main(){
    int mat[N][N] = {
                { 1, 2, -1, -4, -20 },
                { 8, -3, 4, 2, 1 },
                { 3, 8, 6, 1, 3 },
                { -4, -1, 1, 7, -6 },
                { 0, -4, 20, -5, 1 }
            };
    cout << "Maximum Value is "
        << getMaxDiff(mat);
 
    return 0;
}
