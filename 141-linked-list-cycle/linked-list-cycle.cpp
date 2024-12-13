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
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
        ListNode* ptr = head->next;
        ListNode* ptr1 = head;

        while (ptr != ptr1) {
            if(ptr->next ==NULL ||ptr->next->next==NULL){
                return false;
            }

            ptr = ptr->next->next;
            ptr1 = ptr1->next;
            
        }
        return true;
    }
};