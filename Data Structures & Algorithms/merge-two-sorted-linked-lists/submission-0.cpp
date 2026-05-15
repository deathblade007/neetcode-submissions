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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        ListNode node0;
        node0.val = 0;
        node0.next = nullptr;
        ListNode* nxt1 = nullptr;
        ListNode* nxt2 = nullptr;
        ListNode* head;
        ListNode* list3;
        list3 = &node0;
        head = node0.next;
        while(cur1 != nullptr && cur2 != nullptr){
            if(cur1->val <= cur2->val){
                nxt1 = cur1->next;
                list3->next = cur1;
                list3 = cur1;
                cur1 = nxt1;
                continue;
            }
            if(cur2->val <= cur1->val){
                nxt2 = cur2->next;
                list3->next = cur2;
                list3 = cur2;
                cur2 = nxt2;
                continue;
            }
        }
        if(cur1 != nullptr){
            list3->next = cur1;
        }
        else{
            list3->next = cur2;
        }
        return node0.next;
    }
};
