
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0;
        int fast = 0;
        int n = nums.size();
        while (fast < n){
            if(nums[fast] != val){
                nums[slow] =  nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
