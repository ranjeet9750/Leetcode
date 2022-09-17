class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> mat(m, vector<int>(n));
        
        for(int i = 0 ; i < m; i++){
            for(int j = 0; j < n; j++){
                mat[i][j] = matrix[i][j];
                }
            }
        for(int i = 0; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j]==0){
                    for(int i = 0; i < m; i++)
                        mat[i][j]=0;
                    for(int j = 0 ; j < n ; j++)
                        mat[i][j]=0;
                }
            }
        }
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                matrix[i][j]=mat[i][j];
            }
        }
     
    }
};