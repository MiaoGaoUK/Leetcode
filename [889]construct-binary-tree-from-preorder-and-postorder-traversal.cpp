
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
    TreeNode* build(vector<int>& preorder, int preStart, int preEnd,
                    vector<int>& postorder, int postStart, int postEnd) {

        if (postEnd < postStart) return nullptr;

        if(preStart == preEnd) {
            return new TreeNode(preorder[preStart]);
        }

        int rootVal = preorder[preStart];

        int leftVal = preorder[preStart+1];

        int index = -1;
        for (int i = postStart; i <= postEnd; i++){
            if( postorder[i] == leftVal){
                index = i;
                break;
            }

        }

        int leftsize = index - postStart + 1;

        TreeNode* root = new TreeNode(rootVal);

        root->left = build(preorder, preStart + 1 , preStart + leftsize ,
                           postorder, postStart, index);
        root->right = build(preorder, preStart + leftsize + 1, preEnd,
                            postorder,  index+1, postEnd-1);

        return root;

    }

    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        return build(preorder,0 , preorder.size()-1,
                     postorder, 0 , postorder.size()-1);

    }
};
//leetcode submit region end(Prohibit modification and deletion)
