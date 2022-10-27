
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findAnagrams(string s1, string s2) {

        unordered_map<char, int> need, window;
        for(char c: s2) need[c]++;

        int left =0, right =0;

        int valid =0;
        vector<int> res;


        while(right < s1.size()){
            char c = s1[right];
            right++;
            if (need.count(c)){
                window[c] ++;
                if (window[c] == need[c]) {
                    valid++;
                }
            }
            while(right - left >= s2.size()){
                if (valid ==  need.size()){
                    res.push_back(left);
                }

                char d = s1[left];
                left ++;
                if(need.count(d)){
                    if (window[d] == need[d]){
                        valid--;
                    }
                    window[d]--;
                }
            }
        }

        return res;

        }
    };

//leetcode submit region end(Prohibit modification and deletion)
