
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* build(vector<int>& nums, int left, int right){

        if(left>right) return nullptr;

        int index = -1;
        int maxVal = INT_MIN;
        for(int i = left; i < right + 1; i++){
            if (nums[i] > maxVal){
                index = i;
                maxVal = nums[i];
            }
        }

        TreeNode* root = new TreeNode(maxVal);
        root->left = build(nums, left, index - 1 );
        root->right = build(nums, index + 1, right);

        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums, 0, nums.size()-1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
