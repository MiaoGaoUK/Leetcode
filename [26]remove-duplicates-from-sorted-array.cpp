
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        if ( l == 0) return 0;
        int slow = 0,  fast = 0;

        while(fast<l){
            if (nums[slow]!= nums[fast]){
                slow ++;
                nums[slow] = nums[fast];
            }
            fast++;

        }
        return slow+1;

    }



};


