class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        
        for i, a in enumerate(nums):
            # skip to next value if anchor same as previous to avoid duplicate triplet
            if i > 0 and a == nums[i-1]: 
                continue
            
            # make two pointers, l is pointer after anchor and r is last value
            l, r = i + 1, len(nums)-1
            
            # find solutions
            while l < r: 
                if nums[l] + nums[r] + a > 0: 
                    r -= 1
                elif nums[l] + nums[r] + a < 0: 
                    l += 1
                else: 
                    res.append([a, nums[l], nums[r]])
                    l += 1
                    # avoid duplicate triplet by moving left pointer until new value but make sure l < r
                    while nums[l] == nums[l-1] and l < r: 
                        l += 1
        
        return res
        