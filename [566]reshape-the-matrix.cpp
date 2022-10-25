
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int a = mat.size(), b = mat[0].size();
        if (a * b != r*c) return mat;
//        1.愚蠢直接版
//        vector<int> nums;
//        vector<vector<int>> res;
//        for (int i =0; i<a; i++){
//            for(int j =0; j<b;j++){
//                nums.push_back(mat[i][j]);
//            }
//        }
//        int k = 0;
//        for (int i =0; i<r; i++){
//            vector<int> tem;
//             for(int j =0; j<c;j++){
//                tem.push_back(nums[k++]) ;
//
//            }
//             res.push_back(tem);
//        }
//      2. 二维数组的一维表示,但实际也没快多少。。。。
        vector<vector<int>> res(r,vector<int>(c));
        for(int i =0; i< a*b; i++){
            res[i/c][i%c] = mat[i /b][i%b];
        }

        return res;


    }
};
//leetcode submit region end(Prohibit modification and deletion)
