
//leetcode submit region begin(Prohibit modification and deletion)
class LRUCache {
    struct ListNode{
        int key, val;
        ListNode *pre, *next;
        ListNode(): key(0), val(0), pre(0), next(0){}; //无参数的构造函数数组初始化时调用
        ListNode(int k, int v): key(k), val(v), pre(0), next(0){}; // 初始化列表进行有参构造
   
    };

    ListNode *head, *tail;
    unordered_map<int, ListNode*> mp;
    int size;
    int _capacity;
public:
    LRUCache(int capacity):_capacity(capacity), size(0) {
        head = new ListNode();
        tail = new ListNode();
        head->next = tail;
        tail->pre = head;
    }

    int get(int key) {
        if (mp.count(key) == 0) return -1;

        // 根据key 在图中索引节点
        ListNode *node = mp[key];
        // 将该节点移动到队头
        move2head(node);
        // 返回节点的值
        return node->val;
    }

    void put(int key, int value) {
        if (mp.count(key)) {
            ListNode *node = mp[key];
            node->val = value;
            move2head(node);
        }else{
            ListNode *node = new ListNode(key, value);
            add2head(node);
            mp[key] = node;
            size++;
            if (size > _capacity){
                removeTail();
                size--;
            }
        }

    }


    void move2head(ListNode* node){
        node->pre->next = node->next;
        node->next->pre = node->pre;

        node->next = head->next;
        node->pre = head;

        head->next->pre = node;
        head->next = node;
    }
    void add2head(ListNode *node){
        node->next = head->next;
        node->pre = head;

        head->next->pre = node;
        head->next = node;
    }

    void removeTail(){
        ListNode *node = tail->pre;

        node->pre->next = tail;
        tail->pre = node->pre;

        mp.erase(node->key);
        delete node; // 这点挺有意思的 明天研究研究

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
//leetcode submit region end(Prohibit modification and deletion)
