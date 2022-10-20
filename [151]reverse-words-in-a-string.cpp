
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void removeSpacing(string &s){
        int slow = 0, fast =0;
        while(s.size() > 0 && fast < s.size() && s[fast] == ' '){
            fast++;
        }
        for (;fast < s.size();fast++){
            if (fast-1>0 && s[fast-1] == s[fast] && s[fast-1] ==' '){
                continue;
            }
            else{
                s[slow] = s[fast];
                slow ++;
            }

        }
        if(slow -1 >0 && s[slow-1] == ' '){
            s.resize(slow-1);
        }else{
            s.resize(slow);
        }
    }



    void reverseS(string &s, int start, int end){
        for (int i =start, j= end; i< j;i++,j--){
            swap(s[i],s[j]);
        }

    }
    string reverseWords(string s) {
//        去除空格
        removeSpacing(s);
//        将整个字符串反转
        reverseS(s, 0, s.size()-1);
//        反转单个单词
        for (int i =0; i < s.size(); i++){
            int j = i;
            while(j < s.size() && s[j] != ' '){
                j++;
            }
            reverseS(s, i, j-1);
            i = j;
        }
        return s;




    }
};
//leetcode submit region end(Prohibit modification and deletion)
