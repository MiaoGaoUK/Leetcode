
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
    unordered_map<string, int> ump;
    vector<TreeNode*> res;

    string traverse(TreeNode* root){
        if (root == nullptr) return "#";

        string left = traverse(root->left);
        string right = traverse(root->right);
        string subTree = left + " " + right + " " + to_string(root->val);

        ump[subTree]++;
        if (ump[subTree] == 2){
            res.push_back(root);
        }

        return subTree;

    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        traverse(root);
        return res;


    }
};
//leetcode submit region end(Prohibit modification and deletion)
