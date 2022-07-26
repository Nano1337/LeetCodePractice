# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # define fast and slow pointer
        slow = fast = head
        
        
        # confirm cycle exists using Floyd's cycle detection algo
        while fast and fast.next: 
            slow, fast = slow.next, fast.next.next
            if slow == fast: 
                break
        else: return None
        
        # iterate to return start of cycle 
        while head != slow:
            head, slow = head.next, slow.next
        return head