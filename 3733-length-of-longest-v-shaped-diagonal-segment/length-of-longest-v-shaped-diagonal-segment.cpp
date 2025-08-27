#include <vector>
#include <algorithm>

class Solution {
public:

    int dfs(const std::vector<std::vector<int>>& grid,
            int i, int j, int di1, int dj1, int di2, int dj2,
            int t, bool turned, bool moved) {
        int m = grid.size(), n = grid[0].size();
        int expect = (t % 2) * 2;
        int best = t;

        if (!turned) {

            int ni = i + di1, nj = j + dj1;
            if (ni >= 0 && ni < m && nj >= 0 && nj < n && grid[ni][nj] == expect) {
                best = std::max(best, dfs(grid, ni, nj, di1, dj1, di2, dj2, t + 1, false, true));
            }

            if (moved) {
                ni = i + di2; nj = j + dj2;
                if (ni >= 0 && ni < m && nj >= 0 && nj < n && grid[ni][nj] == expect) {
                    best = std::max(best, dfs(grid, ni, nj, di1, dj1, di2, dj2, t + 1, true, true));
                }
            }
        } else {
            int ni = i + di2, nj = j + dj2;
            if (ni >= 0 && ni < m && nj >= 0 && nj < n && grid[ni][nj] == expect) {
                best = std::max(best, dfs(grid, ni, nj, di1, dj1, di2, dj2, t + 1, true, true));
            }
        }

        return best;
    }

    int searchV(std::vector<std::vector<int>>& grid, int i, int j,
                int di1, int dj1, int di2, int dj2) {
        return dfs(grid, i, j, di1, dj1, di2, dj2, /*t=*/1, /*turned=*/false, /*moved=*/false);
    }

    int lenOfVDiagonal(std::vector<std::vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size();
        int result = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    // Bottom left "V": down-right then down-left
                    result = std::max(result, searchV(grid, i, j, +1, +1, +1, -1));

                    // Bottom right "V": down-left then up-left
                    result = std::max(result, searchV(grid, i, j, +1, -1, -1, -1));

                    // Top right "V": up-left then up-right
                    result = std::max(result, searchV(grid, i, j, -1, -1, -1, +1));

                    // Top left "V": up-right then down-right
                    result = std::max(result, searchV(grid, i, j, -1, +1, +1, +1));
                }
            }
        }
        return result;
    }
};
