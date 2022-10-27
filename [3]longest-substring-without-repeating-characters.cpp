
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLongestSubstring(string s1) {
        unordered_map<char, int>  window;

        int left =0, right =0;
        int res = 0;

        while(right < s1.size()){
            char c = s1[right];
            right++;
            window[c] ++;

            while(window[c]>1){
                char d = s1[left];
                left ++;
                window[d]--;
            }
            res = max(res, right-left);
            }

        return res;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
