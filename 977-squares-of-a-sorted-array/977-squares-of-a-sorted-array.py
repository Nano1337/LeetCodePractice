class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        # notice that values decrease to the center, so use l and r pointers
        # add whichever value is bigger abs value, take square, and append to left of deque
        
        deque = collections.deque()
        l = 0
        r = len(nums) - 1
        while(r-l > -1):
            if abs(nums[l]) >= abs(nums[r]):
                deque.appendleft(nums[l]**2)
                l += 1
            else: 
                deque.appendleft(nums[r]**2)
                r -= 1
        
        return deque