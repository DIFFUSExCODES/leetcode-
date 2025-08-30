class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows, cols, subboxes;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char val = board[i][j];
                if (val != '.'){ 
                    int boxID = (i / 3) * 3 + (j / 3);  
                    if (rows[i].count(val)|| cols[j].count(val) || subboxes[boxID].count(val) ) return false;
                    rows[i].insert(val);
                    cols[j].insert(val);
                    subboxes[boxID].insert(val);
                }

            }
        }
        return true;
    }
};