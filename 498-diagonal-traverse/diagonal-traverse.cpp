class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int len = m * n;
        vector<int> arr(len, 0);
        arr[0] = mat[0][0];
        int i = 0, j = 0, x = 1;

        while (x < len) {
            if (i == 0 || j == n - 1) {
                if (j == n - 1) {
                    if (i < m - 1) {
                        i++;
                        arr[x++] = mat[i][j];
                    }
                } else if (i == 0) {
                    if (j < n - 1) {
                        j++;
                        arr[x++] = mat[i][j];
                    }
                }
                while (j > 0 && i < m - 1) {
                    j--;
                    i++;
                    arr[x++] = mat[i][j];
                }
            } else if (j == 0 || i == m - 1) { 
                if (i == m - 1) {
                    if (j < n - 1) {
                        j++;
                        arr[x++] = mat[i][j];
                    }
                } else if (j == 0) {
                    if (i < m - 1) {
                        i++;
                        arr[x++] = mat[i][j];
                    }
                }
                while (i > 0 && j < n - 1) { 
                    i--;
                    j++;
                    arr[x++] = mat[i][j];
                }
            }
        }
        return arr;
    }
};
