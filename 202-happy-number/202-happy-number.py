class Solution:
    def isHappy(self, n: int) -> bool:
        # can use floyd's cycle detection algo 
        def next_num(n): 
            return sum([int(ch)**2 for ch in str(n)])
        
        slow = n
        fast = next_num(n)
        while slow != fast and fast != 1: 
            slow = next_num(slow)
            fast = next_num(next_num(fast))
        return fast == 1 or not slow == fast