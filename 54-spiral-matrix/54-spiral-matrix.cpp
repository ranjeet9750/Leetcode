class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int sRow = 0 ;
        int eRow = m-1;
        int sCol = 0 ;
        int eCol = n-1;
        
        while(sCol<=eCol and sRow <=eRow){
            
            //start Row 
            for(int col = sCol ; col <= eCol ; col++)
                ans.push_back(matrix[sRow][col]);
            //end Col
            for(int row = sRow+1; row<=eRow; row++)
                ans.push_back(matrix[row][eCol]);
            //end row
            for(int col = eCol-1; col>=sCol ; col--){
                if(sRow==eRow)
                    break;
                ans.push_back(matrix[eRow][col]);
            }
            //start col 
            for(int row = eRow-1;row>=sRow+1;row--){
                if(sCol==eCol)
                    break;
                ans.push_back(matrix[row][sCol]);
            }
            
            sRow++;
            eRow--;
            sCol++;
            eCol--;
        }
        
      return ans ; 
    }
};