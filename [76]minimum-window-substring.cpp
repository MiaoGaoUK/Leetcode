
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
//    void print(int left, int right, string S){
//        while(left< right){
//            cout << S[left] << "";
//            left ++;
//        }
//        cout<< "\n\n";
//    }

    string minWindow(string S, string t) {
        unordered_map<char, int> need, window;
        for(char c : t) need[c]++;

        int left = 0 , right = 0;
        int valid = 0;
        int start = 0 , len = INT_MAX;

        while(right <  S.size()){
//            print(left, right, S);
            char c = S[right];
            right ++;
//            cout << "right: " << c << " " << right << endl;
            if (need.count(c)){
                window[c]++;
//                cout << c << " " << window[c] << endl;
                if (window[c] == need[c]){
                    valid ++;
//                    cout << " Valid number " << valid << endl;
                }
            }

            while (valid == need.size()){
                if (right - left < len){
                    start = left;
                    len = right - left;
//                    cout << " start "<< start << endl;
//                    cout << " len "<< len << endl;
                }
                char d = S[left];
                left ++;
//                cout << "left: " << d << " " << left << endl;
                if (need.count(d)){
                    if (window[d] == need[d]){
                        valid--;
//                        cout << " Valid number " << valid << endl;
                    }
                    window[d]--;
                }
            }
//        cout << "start " << start << " len "<< len << endl;
        }
        return len == INT_MAX ? "" :S.substr(start,len);

    }


};
//leetcode submit region end(Prohibit modification and deletion)
