import collections

class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        
        storage = collections.Counter()
        
        # make two pointers
        l, r, maxLen = 0, 0, 0
        
        while r < len(fruits):
            
            # add right pointer value into storage and increment right pointer
            storage[fruits[r]] += 1
            r += 1
            
            # move left pointer until distinct values in storage <= 2
            while len(storage) > 2: 
                if storage[fruits[l]] > 1: 
                    storage[fruits[l]] -= 1
                elif storage[fruits[l]] == 1: 
                    del storage[fruits[l]]
                l += 1
            
            maxLen = max(maxLen, r-l)
        
        return maxLen