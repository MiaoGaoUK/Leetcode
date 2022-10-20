
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
//    栈： 解答成功:
//            执行耗时:4 ms,击败了34.96% 的C++用户
//            内存消耗:6.1 MB,击败了63.58% 的C++用户
//    int minAddToMakeValid(string s) {
//        stack<char> left;
//        int count = 0;
//        for (char c :s){
//            if (c == '('){
//                left.push(c);
//            }else{
//                if( !left.empty()){
//                    left.pop();
//                }else{
//                    count ++;
//                }
//            }
//        }
//
//
//        return count + left.size();
//    }

// 2. 逻辑 耗时和内存都更少
// 解答成功:
//	执行耗时:0 ms,击败了100.00% 的C++用户
//	内存消耗:6 MB,击败了74.85% 的C++用户
    int minAddToMakeValid(string s) {
        int ans = 0;
        int left = 0;
        for (char c:s){
            if (c == '('){
                left ++;
            }else{
                if (left >0){
                    left --;
                }else{
                    ans ++;
                }
            }

        }



        return ans + left;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
