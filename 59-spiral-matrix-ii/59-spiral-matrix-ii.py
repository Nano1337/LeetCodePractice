class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        # append row and rotate solution
        
        # create empty matrix and decrementing counter
        A, lo = [], n*n+1
        
        # while decrementing counter isn't 0 yet
        while lo > 1: 
            
            # update counter ranges
            lo, hi = lo - len(A), lo
            
            # append row to CW rotated matrix
            A = [list(range(lo, hi))] + list(zip(*A[::-1]))
        
        return A
            