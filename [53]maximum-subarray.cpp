
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if (n ==1) return nums[0];

        int max =0, cur=0;
        for (int i =0;i<n-1; i++){
            cur = nums[i] + nums[i+1];
            if (cur > max){
                max = cur;
            }
        }
        return max;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
