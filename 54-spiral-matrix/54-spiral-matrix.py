class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        
        # create output list
        output = []
        
        # keep going until no more values in matrix
        while len(matrix) != 0: 
            
            # take off top row of matrix and store in output
            output += matrix.pop(0)
            
            # flip rows and then diagonally to turn matrix 90 degrees CCW
            matrix = [*zip(*matrix)][::-1]
            
        return output