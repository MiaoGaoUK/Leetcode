
//leetcode submit region begin(Prohibit modification and deletion)
class NumArray {

//    构造前缀和数组
    vector<int> preSum;

public:
//    对于一个输入的数组，构造其前缀和数组
//    注意preSum的长度，其长度比nums.size()大1， 其最后一个索引等于nums.size()
    NumArray(vector<int>& nums) {
        preSum.resize(nums.size()+1);
        for (int i = 1; i < nums.size()+1; i++){
            preSum[i] = nums[i-1] + preSum[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        return preSum[right+1] - preSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
//leetcode submit region end(Prohibit modification and deletion)
