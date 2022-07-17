class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        # use sum from the end and move left pointer
        
        leftSum, rightSum = 0, sum(nums)
        
        for i, a in enumerate(nums):
            
            rightSum -= a
            
            if leftSum == rightSum: 
                return i
            
            leftSum += a
        
        # if no solution then return -1
        return -1
            