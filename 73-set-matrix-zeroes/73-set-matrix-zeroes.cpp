class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
       int row = matrix.size();
       int col = matrix[0].size();
        bool isCol = false;
        
        for(int i = 0 ; i <row ; i++){
            if(matrix[i][0]==0){
                isCol = true;
        }
        
        for(int j = 1 ; j < col ; j++){
            
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
        }
        
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col ; j++){
                if(matrix[i][0]==0|| matrix[0][j]==0){
                    matrix[i][j] = 0 ;
                }
            }
        }
        
        if(matrix[0][0]==0){
            for(int j = 0 ; j< col ; j++){
                matrix[0][j]=0;
            }
        }
        
        if(isCol){
            for(int i = 0 ; i < row; i++){
                matrix[i][0]= 0;
            }
        }
        
        
    }
};
//solution 1
// int m = matrix.size();
//         int n = matrix[0].size();
//         vector<vector<int>> mat(m, vector<int>(n));
        
//         for(int i = 0 ; i < m; i++){
//             for(int j = 0; j < n; j++){
//                 mat[i][j] = matrix[i][j];
//                 }
//             }
//         for(int i = 0; i < m ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(matrix[i][j]==0){
//                     for(int i = 0; i < m; i++)
//                         mat[i][j]=0;
//                     for(int j = 0 ; j < n ; j++)
//                         mat[i][j]=0;
//                 }
//             }
//         }
//         for(int i = 0 ; i < m ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 matrix[i][j]=mat[i][j];
//             }
//         }
     