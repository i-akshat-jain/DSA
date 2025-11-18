# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Sorted Array to Binary Search Tree
# Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
# For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1.
# Example:
# Given the sorted array: [-10,-3,0,5,9],
# One possible answer is: [0,-3,9,-10,null,5], which represents the following height balanced BST:
#       0
#      / \
#    -3   9
#    /   /
#  -10  5


class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        
        def convert(left, right):
            if left > right:
                return
            mid = ( left + right ) // 2
            node = TreeNode(nums[mid])
            node.left = convert(left, mid - 1)
            node.right = convert(mid + 1, right)

            return node
        return convert(0, len(nums) - 1)
        
# Time Complexity: O(n)
# Space Complexity: O(n)
# The time complexity is O(n) because we traverse the array once and create a node for each element.
# The space complexity is O(n) because we use a recursive stack to store the nodes.
# The space complexity is O(n) because we use a recursive stack to store the nodes.

# Walk-through with nums = [-10, -3, 0, 5, 9]
# Step 1: convert(0, 4) -> mid = 2 -> TreeNode(0) becomes root
# Step 2: build left subtree convert(0, 1)
#   Step 2a: convert(0, 1) -> mid = 0 -> TreeNode(-10)
#       Step 2a-i: convert(0, -1) returns None (left child of -10)
#       Step 2a-ii: convert(1, 1) -> mid = 1 -> TreeNode(-3)
#           Step 2a-ii-A: convert(1, 0) returns None (left child of -3)
#           Step 2a-ii-B: convert(2, 1) returns None (right child of -3)
#       -3 becomes right child of -10
#   -10 becomes left child of 0
# Step 3: build right subtree convert(3, 4)
#   Step 3a: convert(3, 4) -> mid = 3 -> TreeNode(5)
#       Step 3a-i: convert(3, 2) returns None (left child of 5)
#       Step 3a-ii: convert(4, 4) -> mid = 4 -> TreeNode(9)
#           Step 3a-ii-A: convert(4, 3) returns None (left child of 9)
#           Step 3a-ii-B: convert(5, 4) returns None (right child of 9)
#       9 becomes right child of 5
#   5 becomes right child of 0
# Final BST:
#         0
#       /   \
#    -10     5
#      \      \
#      -3      9