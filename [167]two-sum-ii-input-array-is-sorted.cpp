
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left =0;
        int right = numbers.size()-1;
        vector<int> index;
        while(left < right){
            int sum = numbers[left] + numbers[right];
            if (sum == target){
                index.push_back(left+1);
                index.push_back(right+1);
                return index;
            } else if(sum< target){
                left++;

            }else{right--;}
        }
        index.push_back(-1);
        index.push_back(-1);
        return index;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
