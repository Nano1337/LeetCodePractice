class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        # use three pointers, two that start from the front for 0 and 1
        # another pointer that starts at the back for 2
        # swap 0 and 1 with respective pointers when encountered
        # swap 2 and 0/1 with last pointer when encountered then lastPointer--
        
        red, white, blue = 0, 0, len(nums)-1
        
        while white <= blue:
            
            # cover first part cases to sort red to make it a two pointer problem later
            if nums[white] == 0: 
                nums[white], nums[red] = nums[red], nums[white]
                white += 1
                red += 1
            # then move white pointer until unsorted value occurs, 
            elif nums[white] == 1: 
                white += 1
             # sort white and blues
            else: 
                nums[white], nums[blue] = nums[blue], nums[white]
                blue -= 1
            
