
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
//    排序
//    bool containsDuplicate(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int n = nums.size();
//        for(int i =0; i<n-1;i++){
//            if (nums[i] == nums[i+1]){
//                return true;
//            }
//        }
//        return false;
//    }
//  hash
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int>s;
    for (int x : nums){
        if (s.find(x) != s.end()){
            return true;
        }
        s.insert(x);
    }
    return false;
}
};
//leetcode submit region end(Prohibit modification and deletion)
