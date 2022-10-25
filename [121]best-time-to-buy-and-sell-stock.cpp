
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
//    贪心算法
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int cur = prices[0];
        for(int p: prices){
            if (p < cur){
                cur = p;
            }
            if (p > cur){
                max = std::max(max, p-cur);
            }
        }
        return max;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
