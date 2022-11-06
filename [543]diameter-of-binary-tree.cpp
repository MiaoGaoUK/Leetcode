
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
    int maxdiameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        MaxDepth(root);
        return maxdiameter;

    }
    int MaxDepth(TreeNode* root){
        if (root== nullptr)return 0;
        int leftMax = MaxDepth(root->left);
        int rightMax = MaxDepth(root->right);

        int myDiameter = leftMax + rightMax;
        maxdiameter= max(maxdiameter,myDiameter);

        return 1 +  max(leftMax,rightMax);

    }
};
//leetcode submit region end(Prohibit modification and deletion)
