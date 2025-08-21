class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> matri(m, vector<int>(n, 0));
        int count = 0 ;

        for(int i = 0; i < m ; i++){
            matri[i][0] = matrix[i][0];
            count += matrix[i][0] ;
        }
        for(int i = 1; i < n ; i++){
            matri[0][i] += matrix[0][i] ;
            count += matrix[0][i];
        }
        for (int i = 1 ; i < m ; i++){
            for(int j = 1 ; j < n ; j++ ){
                if(matrix[i][j]==1){
                    matri[i][j] += min(matri[i-1][j-1],min(matri[i-1][j],matri[i][j-1]))+1;
                    count+= matri[i][j] ;             
                }
            }
        }
        
        return count ;
    }
};