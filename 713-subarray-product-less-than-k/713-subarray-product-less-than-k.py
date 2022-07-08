class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        # sliding window problem with two pointers
        
        l, prod, count = 0, 1, 0
        # make second pointer to establish sliding window
        for r in range(len(nums)):
            
            # add right pointer value to product
            prod *= nums[r]
            
            # move left pointer until valid product but make sure it's still before right pointer
            while prod >= k and l <= r: 
                prod /= nums[l]
                l += 1
            
            # count will be sum of right - left to avoid doing another for loop
            count += r-l + 1
        
        return count