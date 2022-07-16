class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        
        # make two pointers and storage
        l, r, maxLen = 0, 0, 0
        storage = collections.Counter()
        
        # increment right pointer and add char to storage
        while r < len(s):
            
            storage[s[r]] += 1
            
            # increment left pointer until no more duplicate values
            while storage[s[r]] > 1: 
                if storage[s[l]] > 1: 
                    storage[s[l]] -= 1
                else: 
                    del storage[s[l]]
                l += 1
                
            r += 1
            
            # keep track of maximum length substring without repeating characters
            maxLen = max(maxLen, r-l)
                
        return maxLen
            
        