
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
//    1. 遍历思想，遍历每一个节点，让其左右子树交换
//    void traverse(TreeNode* root){
//        if (root== nullptr) return;
//
//        TreeNode* tmp;
//        tmp = root->left;
//        root->left = root -> right;
//        root -> right = tmp;
//
//        traverse(root->left);
//        traverse(root->right);
//    }
//    TreeNode* invertTree(TreeNode* root) {
//        traverse(root);
//        return root;
//    }
//  2. 分解思想，对于每一棵树，让其左右子树交换
    TreeNode* invertTree(TreeNode* root){
        if (root== nullptr) return nullptr;

        TreeNode* left = invertTree(root->left);
        TreeNode* right = invertTree(root->right);

        root->left = right;
        root->right = left;

        return root;
}

//
};
//leetcode submit region end(Prohibit modification and deletion)
