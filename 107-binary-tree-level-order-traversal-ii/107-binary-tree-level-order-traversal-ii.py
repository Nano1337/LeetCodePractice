# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

from collections import deque

class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        # literally same problem as Binary Tree Level Order Traversal II
        # but just append level list to beginning of output list
        
        # edge case when root doesn't exist
        if not root: return []
        
        # create deque to use as a queue for BFT 
        queue, output = deque([root]), deque()
        
        # iterate until no more elements in queue
        while queue: 
            
            # create number of nodes in level and keep track of level node vals
            level, size = [], len(queue)
            
            # iterate through all nodes in level 
            for i in range(size):
                
                # get node from queue
                node = queue.popleft()
                
                # add node children to queue if exist
                if node.left: queue.append(node.left)
                if node.right: queue.append(node.right)
                
                level.append(node.val)
            
            output.appendleft(level)
        
        return output
        