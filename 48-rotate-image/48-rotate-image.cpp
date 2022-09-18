class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int col = 0 ;
        vector<vector<int>> rotate(n,vector<int>(n));
        
        for(int i = 0 ; i < n ; i++){
            int row = n-1;
            for(int j = 0 ; j < n ; j++){
                rotate[i][j]=matrix[row][col];
                row--;
            }
            col++;
        }
        
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j < n ; j++){
                matrix[i][j]=rotate[i][j];
            }
        }
        
    }
};