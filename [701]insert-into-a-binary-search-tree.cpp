
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // 递归找到待插入的点，该点应为空，我们创建该节点并返回连接到主树上
        if (root == nullptr) return new TreeNode(val);
        if( root->val < val){
            root->right = insertIntoBST(root->right, val);
            }

        if( root->val > val){
            root->left = insertIntoBST(root->left, val);
        }
        return root;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
