class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        # walk matrix from outside in
        
        # create empty matrix with appropriate dimensions
        A = [[0]*n for i in range(n)]
        
        # create index variables
        i, j, di, dj = 0, 0, 0, 1
        
        # iterate through all numbers of n*n
        for k in range(n*n):
            A[i][j] = k + 1
            
            # turn right if value ahead exists
            if A[(i+di)%n][(j+dj)%n]: 
                di, dj = dj, -di
            
            # increment i, j accordingly
            i += di
            j += dj
        
        return A