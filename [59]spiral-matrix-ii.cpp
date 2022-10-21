
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int upper_bound = 0, lower_bound = n -1;
        int left_bound = 0, right_bound = n -1;
        int num = 1;


        while(num <= n*n){
            if (upper_bound <= lower_bound){
                for (int j = left_bound; j <= right_bound; j++){
                    res[upper_bound][j] = num++;
                }
                upper_bound++;
            }

            if (left_bound <= right_bound){
                for (int i = upper_bound; i<= lower_bound; i++){
                    res[i][right_bound] = num++;
                }
                right_bound--;
            }

            if (upper_bound <= lower_bound){
                for (int j = right_bound; j >= left_bound; j--){
                    res[lower_bound][j] = num++;
                }
                lower_bound--;

            }
            if (left_bound <= right_bound){
                for (int i = lower_bound; i>= upper_bound; i--){
                    res[i][left_bound]= num++;
                }
                left_bound++;
            }

        }
        return res;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
