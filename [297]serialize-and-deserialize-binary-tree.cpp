
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    void serialize(TreeNode* root, string& s){
        if (root == nullptr){
            s+= "#";
        }
        s += to_string(root->val) + ",";
        serialize(root->left, s);
        serialize(root->right, s);
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res;
        serialize(root, res);
        return res;
    }


    TreeNode* mydeserilize(list<string> &l){
        if (l.front() == "#"){
            l.erase(l.begin());
            return nullptr;
        }

        TreeNode* root = new TreeNode(stoi(l.front()));
        l.erase(l.begin());
        root->left = mydeserilize(l);
        root ->right = mydeserilize(l);

        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        list<string> dataArray;
        string str;
//        for 循环， 如果当前符号不是，就将当前字符存入str中，如果是分隔符的时候，将当前
//          存储的str放到array中
        for (auto& ch : data) {
            if (ch == ',') {
                dataArray.push_back(str);
                str.clear();
            } else {
                str.push_back(ch);
            } }

        if (!str.empty()) {
            dataArray.push_back(str);
            str.clear();
        }

        return mydeserilize(dataArray);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
//leetcode submit region end(Prohibit modification and deletion)
