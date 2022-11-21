
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
//    TreeNode* traverse(TreeNode* root, int val){
//
//
//
//    }
    TreeNode* searchBST(TreeNode* root, int target) {
        if (root == nullptr) return nullptr;

        if (root -> val <  target){
            return searchBST(root->right,  target);
        }

        if (root -> val >  target){
            return searchBST(root->left,  target);
        }
        return root;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
