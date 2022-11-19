
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
    int sum = 0;
    void traverse(TreeNode* root){
        if (root == nullptr) return ;


        traverse(root -> right);

        sum += root->val;
        root->val = sum;

        traverse(root -> left);


    }
    TreeNode* bstToGst(TreeNode* root) {
        traverse(root);
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
