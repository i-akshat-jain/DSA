# Merge Sorted Array
# Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
# The number of elements initialized in nums1 and nums2 are m and n respectively.
# You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.
# Example 1:
# Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
# Output: [1,2,2,3,5,6]
# Example 2:
# Input: nums1 = [1], m = 1, nums2 = [], n = 0
# Output: [1]

Brute Force Approach:
# Time Complexity: O(nlogn)
# Space Complexity: O(1)
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if len(nums1) == 0:
            return nums2

        if len(nums2) == 0:
            return nums1
        for j in range(n): # iterate through the nums2 array
            nums1[m+j] = nums2[j] # add the elements of nums2 to the end of nums1
        nums1.sort() # sort the nums1 array 


# Two Pointer Approach:
# Time Complexity: O(n)
# Space Complexity: O(1)
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if len(nums1) == 0:
            return nums2

        if len(nums2) == 0:
            return nums1

        i = m - 1
        j = n - 1
        k = m + n - 1
        while j >= 0:
            if i >= 0 and nums1[i] > nums2[j]:
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1


# Example 1 (typical)

# Input:

# nums1 = [1,2,3,0,0,0], m = 3

# nums2 = [2,5,6], n = 3

# Initial pointers:

# i = m - 1 = 2 (nums1[i] = 3)

# j = n - 1 = 2 (nums2[j] = 6)

# k = m + n - 1 = 5

# We iterate while j >= 0:
# | Iter |     i |     j |  k |                     Compare `nums1[i]` vs `nums2[j]` | Action                        | nums1 after action |
# | ---- | ----: | ----: | -: | ---------------------------------------------------: | ----------------------------- | ------------------ |
# | 0    | 2 (3) | 2 (6) |  5 |                          `3 > 6`? **No** → place `6` | `nums1[5] = 6`; `j=1`, `k=4`  | [1,2,3,0,0,6]      |
# | 1    | 2 (3) | 1 (5) |  4 |                          `3 > 5`? **No** → place `5` | `nums1[4] = 5`; `j=0`, `k=3`  | [1,2,3,0,5,6]      |
# | 2    | 2 (3) | 0 (2) |  3 |              `3 > 2`? **Yes** → place `3` from nums1 | `nums1[3] = 3`; `i=1`, `k=2`  | [1,2,3,3,5,6]      |
# | 3    | 1 (2) | 0 (2) |  2 | `2 > 2`? **No** (not greater) → place `2` from nums2 | `nums1[2] = 2`; `j=-1`, `k=1` | [1,2,2,3,5,6]      |

# Now j = -1, loop ends. Final nums1 = [1,2,2,3,5,6]. The merged sorted array is correct.

# Note: when equal (nums1[i] == nums2[j]) this code chooses the else branch and takes from nums2 (that's fine — stable ordering between equal values from different arrays is not required here).