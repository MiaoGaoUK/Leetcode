
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i =0; i < nums.size(); i++){
//            auto 自动推断变量类型
            auto it = hash.find(target- nums[i]);
            if (it != hash.end()){
                return {it->second, i};
            }
            hash[nums[i]] = i;

        }
        return {};

    }
};
//leetcode submit region end(Prohibit modification and deletion)
