
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
//    逆向双指针
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0) nums1 = nums2;
        int p1 = m-1, p2 = n-1;
        int tail = m+n-1;
        int cur;
        while(p1>=0 || p2>=0){
            if (p1 ==-1){
                cur = nums2[p2--];
            }else if (p2==-1){
                cur = nums1[p1--];
            }else if (nums2[p2] > nums1[p1]){
                cur = nums2[p2--];
            }else {
                cur = nums1[p1--];
            }
            nums1[tail--] =  cur;
        }
    }
//    合并后排序
};
//leetcode submit region end(Prohibit modification and deletion)
