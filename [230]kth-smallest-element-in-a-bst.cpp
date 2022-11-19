
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

    vector<int> res;

    void traverse(TreeNode* root){
        if (root == nullptr) return;

        traverse(root->left);

        res.push_back(root->val);

        traverse(root->right);

    }
    int kthSmallest(TreeNode* root, int k) {
        traverse(root);
        return res[k-1];


    }

};
//leetcode submit region end(Prohibit modification and deletion)
