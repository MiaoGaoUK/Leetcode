
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

    void moveZeroes(vector<int>& nums) {
        int l = removeElement(nums, 0);
        int n = nums.size();
        for (;l< n; l++){
            nums[l]=0;

        }



    }
};
//leetcode submit region end(Prohibit modification and deletion)
