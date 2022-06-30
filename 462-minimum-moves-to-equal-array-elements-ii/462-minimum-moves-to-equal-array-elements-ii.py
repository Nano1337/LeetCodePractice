class Solution:
    def minMoves2(self, nums: List[int]) -> int:
        
        # find median of nums list, not mean bc of failure case [0, 0, 0, 0, 1, 0, 0]
        median = sorted(nums)[len(nums)//2]
        
        # find abs difference between value and median and return sum of differences
        return sum(abs(num - median) for num in nums)
        