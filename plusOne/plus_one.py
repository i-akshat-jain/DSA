# Plus One
# Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.
# The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
# You may assume the integer does not contain any leading zero, except the number 0 itself.
# Example 1:
# Input: digits = [1,2,3]
# Output: [1,2,4]
# Example 2:
# Input: digits = [4,3,2,1]
# Output: [4,3,2,2]

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        i = 0
        for i in range(len(digits) -1, -1, -1): # iterate from the last digit to the first digit
            # if the last digit is not 9, then we can just add 1 to the last digit and return the result    
            if digits[i] + 1 != 10:
                digits[i] += 1
                return digits # return the result
            digits[i] = 0 # if the last digit is 9, then we need to set the last digit to 0
        if i == 0:
            return [1]+ digits    # if the first digit is 0, then we need to add 1 to the first digit
        return [1]+ digits    # if the first digit is 0, then we need to add 1 to the first digit