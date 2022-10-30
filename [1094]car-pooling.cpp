
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:

    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1001,0);
        for(auto trip : trips){
            diff[trip[1]] += trip[0];
            diff[trip[2]] -= trip[0];
        }

        int sum = 0;
        for( auto value : diff){
            sum += value;
            if (sum > capacity){
                return false;
            }
        }
        return true;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
