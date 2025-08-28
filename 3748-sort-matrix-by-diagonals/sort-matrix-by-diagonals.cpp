class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), t;

        //  top-right (ascending) 
        for (int j = 1; j < n; j++) {                 // start from row=0, col=j
            for (int pass = 0; pass < n; pass++) {    // bubble passes
                for (int x = 1; j+x < n && x < n; x++) {
                    if (grid[x-1][j+x-1] > grid[x][j+x]) { // ascending
                        t = grid[x][j+x];
                        grid[x][j+x] = grid[x-1][j+x-1];
                        grid[x-1][j+x-1] = t;
                    }
                }
            }
        }

        //  bottom-left (descending)
        for (int i = 0; i < n; i++) {                 // start from row=i, col=0
            for (int pass = 0; pass < n; pass++) {
                for (int x = 1; i+x < n && x < n; x++) {
                    if (grid[i+x-1][x-1] < grid[i+x][x]) { // descending
                        t = grid[i+x][x];
                        grid[i+x][x] = grid[i+x-1][x-1];
                        grid[i+x-1][x-1] = t;
                    }
                }
            }
        }

        return grid;
    }
};
