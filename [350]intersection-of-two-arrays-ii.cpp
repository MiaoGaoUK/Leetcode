
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
//    双指针
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n = nums1.size(), m= nums2.size();
        int p1=0, p2=0;

        while (p1 < n && p2 < m) {
            if (nums1[p1] == nums2[p2]) {
                res.push_back(nums1[p1]);
                p1++;
                p2++;
            }else if(nums1[p1] > nums2[p2]){
                p2++;
            }else{
                p1++;
            }
        }

        return res;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
