
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        int ans_left;
        // 寻找左边界
        while(left < right){
            int mid =  left + (right - left)/2;
            if (nums[mid] >= target){
                right = mid;
            }else if (nums[mid] < target){
                left = mid + 1;
            }
        }

        if (left == nums.size() || nums[left] != target) return {-1,-1};
        ans_left = left;
        // 寻找右边界
        left = 0;
        right = nums.size();

        while(left < right){
            int mid =  left + (right - left)/2;
            if (nums[mid] <= target){
                left = mid + 1 ;
            }else if (nums[mid] > target){
                right = mid;
            }
        }

        return {ans_left, right-1};

    }
};
//leetcode submit region end(Prohibit modification and deletion)
