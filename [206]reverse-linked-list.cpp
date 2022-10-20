
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    //递归---解答成功:
    //执行耗时:4 ms,击败了95.11% 的C++用户
//    内存消耗:8.3 MB,击败了8.58% 的C++用户
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }

        ListNode* ret = reverseList(head->next);
        head ->next ->next= head;
        head -> next = nullptr;
        return ret;
    }


// 双指针
//    执行耗时:8 ms,击败了47.40% 的C++用户
//            内存消耗:8.1 MB,击败了49.48% 的C++用户
//    ListNode* reverseList(ListNode* head) {
//        ListNode* pre = head;
//        ListNode* cur = nullptr;
//
//        while(pre != nullptr){
//            ListNode* temp = pre->next;
//            pre->next = cur;
//            cur = pre;
//            pre = temp;
//        }
//        return cur;
//
//    }



};
//leetcode submit region end(Prohibit modification and deletion)
