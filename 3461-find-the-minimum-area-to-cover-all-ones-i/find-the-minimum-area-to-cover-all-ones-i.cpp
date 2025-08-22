class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m = grid.size();
        int n= grid[0].size();
        int top = m , down = 0, left = n, right = 0 ;

        for(int i = 0 ; i < m ; i++ ){
            for(int j = 0 ; j < n ; j++){
                 if(grid[i][j]==1){
                    right = max(j,right);
                    left = min(j,left);
                    top = min(i,top);
                    down = max(i,down);
                 }
            }
        }
        return (right-left+1)*(down-top+1);
    }    
};