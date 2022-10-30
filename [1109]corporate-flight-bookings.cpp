
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n,0);

        for(auto booking : bookings){
            diff[booking[0]-1] += booking[2];
            // 当尾部索引大于等于n时，超出数组范围，不再需要修改
            if (booking[1]<n){
                diff[booking[1]] -= booking[2];
            }
        }

        int sum = 0;
        for( int i = 0; i < n ; i++){
            sum +=diff[i] ;
            diff[i] = sum;
        }
        return diff;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
