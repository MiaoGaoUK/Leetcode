
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int upper_bound = 0, lower_bound = m -1;
        int left_bound = 0, right_bound = n -1;

        vector<int> res ;

        while(res.size() < m*n){
            if (upper_bound <= lower_bound){
                for (int j = left_bound; j <= right_bound; j++){
                    res.push_back(matrix[upper_bound][j]);
                }
                upper_bound++;
            }

            if (left_bound <= right_bound){
                for (int i = upper_bound; i<= lower_bound; i++){
                    res.push_back(matrix[i][right_bound]);
                }
                right_bound--;
            }

            if (upper_bound <= lower_bound){
                for (int j = right_bound; j >= left_bound; j--){
                    res.push_back(matrix[lower_bound][j]);
                }
                lower_bound--;

            }
            if (left_bound <= right_bound){
                for (int i = lower_bound; i>= upper_bound; i--){
                    res.push_back(matrix[i][left_bound]);
                }
                left_bound++;
            }

        }
        return res;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
