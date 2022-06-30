class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        # two pointers, l and r
        l = r = 0
        k = 1
        
        # move r pointer through all values O(n) solution
        for r in range(len(nums)):
            
            # if the value at r is different from the value at l, increment position of l and replace val
            if nums[r] != nums[l]:
                l += 1
                nums[l] = nums[r]
                k += 1
                
        return k