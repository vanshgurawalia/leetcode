/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>seen;

        ListNode* a = headA;
        ListNode* b = headB;

        while(a!=nullptr){
            if(seen.count(a)==0) seen.insert(a);
            a = a->next;
        }

        while(b!=nullptr){
            if(seen.count(b)) return b;
            b = b->next;
        }
        return nullptr;
    }
};