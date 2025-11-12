# Remove Duplicates from Sorted Array
# Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
# Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
# Example:
# Given nums = [1,1,2],
# Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
# It doesn't matter what you leave beyond the returned length.

# why two pointer is bettr than hashmap in this case?
# because we are not using any extra space and we are not modifying the input array in-place with O(1) extra memory.
# we are using two pointers to traverse the array and compare the elements.
# we are not using any extra space and we are not modifying the input array in-place with O(1) extra memory.
# we are using two pointers to traverse the array and compare the elements.

# | Approach              | Time Complexity | Space Complexity | In-Place                  |
# | --------------------- | --------------- | ---------------- | ------------------------- |
# | Two-pointer (optimal) | O(n)            | O(1)             | ✅ Yes                     |
# | Hash map / set        | O(n)            | O(n)             | ⚠️ No (needs extra space) |


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        if len(nums)<=1:    # If the array has only one element, return the length of the array
            return len(nums) # this reduces the RunTime when adding this condition
        for j in range(1, len(nums)):
            if nums[i] != nums[j]:
                i += 1
                nums[i] = nums[j]     

        return i +1