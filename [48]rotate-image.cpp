
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void rotate(vector <vector<int>> &matrix) {
        int n = matrix.size();
        for (int i = 0; i < n ; i++) {
            for (int j = 0; j < i; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0, k = n - 1; j < k; j++, k--) {
                //类似于双指针，由两端向中心靠齐
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
            }
        }
    }
//    void swap(int &a, int &b){
//    int temp;
//    temp = a;
//    a = b;
//    b = temp;
//}
//
//    void rotate(vector<vector<int>>& matrix) {
//        //先沿斜对角线翻转
//        int n = matrix.size();
//        for(int i = 0; i < n; i++)
//            for(int j = 0; j < i; j++)
//                swap(matrix[i][j],matrix[j][i]);
//        //再沿垂直竖线翻转
//        for(int i = 0;i < n; i++)
//            for(int j = 0, k = n - 1; j < k ; j++, k--) //类似于双指针，由两端向中心靠齐
//                swap(matrix[i][j],matrix[i][k]);
//    }
};
