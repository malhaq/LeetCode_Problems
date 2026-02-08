# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        sumLinkedList = ListNode(0)
        head = sumLinkedList
        carry = 0
        while (l1 is not None) or (l2 is not None):
            sumLinkedList.next = ListNode()
            sumLinkedList = sumLinkedList.next
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0

            value = carry + val1 + val2
            carry = value //10
            sumLinkedList.val = value %10

            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next


        if(carry > 0):
            sumLinkedList.next = ListNode(val = carry)


        
        return head.next


        