class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        reverse(matrix.begin(),matrix.end());
        for(int i = 0 ; i < matrix.size(); i++){
            for(int j = i+1 ; j < matrix[i].size(); j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
     
    }
};
////solution Brute Approach
//   int n = matrix.size();
//         int col = 0 ;
//         vector<vector<int>> rotate(n,vector<int>(n));
        
//         for(int i = 0 ; i < n ; i++){
//             int row = n-1;
//             for(int j = 0 ; j < n ; j++){
//                 rotate[i][j]=matrix[row][col];
//                 row--;
//             }
//             col++;
//         }
        
//         for(int i = 0 ; i< n ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 matrix[i][j]=rotate[i][j];
//             }
//         }
        