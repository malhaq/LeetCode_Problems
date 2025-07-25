/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) { }
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode( ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        ListNode* pointer1 = headA;
        ListNode* pointer2 = headB;

        while(pointer1 != pointer2){
            if(!pointer1 ){
                pointer1 = headB;
            }else{
                pointer1 = pointer1 -> next;
            }
            if(!pointer2){
                pointer2 = headA;

            }else{

                pointer2 = pointer2 -> next;
            }
        }
        return pointer1 ;
        
    }
};