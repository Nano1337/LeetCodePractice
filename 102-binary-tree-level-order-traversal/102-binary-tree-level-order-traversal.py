# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque

class Solution:
    
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        # if tree is empty
        if not root: return []
        
        # add root 
        output, queue = [], deque([root])
        
        # make one while loop to iterate until no more elements left in deque
        while queue: 
            
            # store number of nodes in current level 
            # and a way to hold current level values to be added to a list to be appended to output
            
            curlist, size = [], len(queue)
            
            # use a for loop to iterate through all the nodes of the current level 
            for i in range(size):
                
                # pop off next element in current level deque
                node = queue.popleft()
                
                # add children of node if exists
                if node.left: 
                    queue.append(node.left)
                if node.right: 
                    queue.append(node.right)
                    
                curlist.append(node.val)
            
            output.append(curlist)
        
        return output
    
    # runtime complexity: O(N)
    # space complexity: O(N)
    
