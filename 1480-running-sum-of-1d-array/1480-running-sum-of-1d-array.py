class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        
        runningSum = nums[0]
        
        if len(nums) > 1:
            for i in range(1, len(nums)):
                runningSum += nums[i]
                nums[i] = runningSum
                
        return nums
            