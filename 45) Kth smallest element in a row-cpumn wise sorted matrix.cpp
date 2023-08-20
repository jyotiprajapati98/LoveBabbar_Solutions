class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int a[n*n];
        int v = 0;
 
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
            a[v] = matrix[i][j];
            v++;
            }
        }
 
        sort(a, a + (n*n));
        int result = a[k - 1];
        return result;
    }
};
