
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder,0 , inorder.size()-1,
                     postorder, 0 , postorder.size()-1);

    }


    TreeNode* build(vector<int>& inorder, int inStart, int inEnd,
                    vector<int>& postorder, int postStart, int postEnd) {

        if (postEnd < postStart) return nullptr;

        int index = -1;
        for (int i = inStart; i <= inEnd; i++){
            if( inorder[i] == postorder[postEnd]){
                index = i;
                break;
            }

        }

        TreeNode* root = new TreeNode(postorder[postEnd]);

        int leftsize = index - inStart;

        root->left = build(inorder, inStart , index-1,
                           postorder, postStart, postStart+leftsize-1);
        root->right = build(inorder, index+1, inEnd,
                            postorder,  postStart+leftsize, postEnd-1);

        return root;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
