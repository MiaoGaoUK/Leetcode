
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
    // 递归
//    int res = 0, depth = 0;
//    void traverse(TreeNode* root){
//        if (root == nullptr) return;
//
//        depth++;
//
//        if (root->left == nullptr && root->right == nullptr){
//            res = max(res,depth);
//        }
//        traverse(root->left);
//        traverse(root->right);
//
//        depth--;
//
//
//    }
//    int maxDepth(TreeNode* root) {
//        traverse(root);
//        return res;

//    }
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        int leftMax = maxDepth(root->left);
        int rightMax = maxDepth(root->right);

        int res = max(leftMax, rightMax) + 1;
        return res;
    }

};
//leetcode submit region end(Prohibit modification and deletion)
