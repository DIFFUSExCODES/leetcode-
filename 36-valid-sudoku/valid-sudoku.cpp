class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int boxrow , boxcol , n = 9 , cr , cc , cb ;

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                char c = board[row][col];
                if (c != '.'){ 
                    boxrow = row - row % 3;
                    boxcol = col - col % 3;
                    cr = 0 ;
                    cc = 0 ;
                    cb = 0 ;

                    for (int i =0; i < n; i++) {
                        if (board[row][i] == c) cr++ ;
                        if (board[i][col] == c) cc++ ;
                        if (cr > 1 || cc > 1){
                            return false;
                        }
                    }
                    for (int i = 0 ; i < 3 ; i++) {
                        for (int j = 0; j < 3; j++) {
                            if (board[boxrow + i][boxcol + j] == c) {
                                cb++ ;
                                if (cb > 1) return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};
