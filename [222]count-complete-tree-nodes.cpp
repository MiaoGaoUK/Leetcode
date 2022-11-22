
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
    int countNodes(TreeNode* root) {
        TreeNode* l = root;
        TreeNode* r = root;
        int lh = 0;
        int rh = 0;
        while (l != nullptr){
            l = l->left;
            lh++;

        }
        while (r != nullptr){
            r = r->right;
            rh++;
        }

        if (lh == rh){
            return (int)pow(2,lh)-1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
