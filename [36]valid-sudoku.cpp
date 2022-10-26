
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {{0}};
        int column[9][9] = {{0}};
        int box[3][3][9] = {{{0}}};

        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] != '.'){
                    int index = board[i][j] - '0' -1;
                    row[i][index]++;
                    column[j][index]++;
                    box[i/3][j/3][index]++;
                    if (row[i][index] > 1 || column[j][index] > 1 || box[i/3][j/3][index] >1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
