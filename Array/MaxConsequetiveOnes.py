class Solution:
    def findMaxConsecutiveOnes(self, nums):
        count = 0
        maxCount = 0

        for num in nums:
            if num == 1:
                count += 1
                maxCount = max(maxCount, count)
            else:
                count = 0

        return maxCount


# This function finds the maximum number of consecutive 1s in the array.
# It counts continuous 1s and resets the count when 0 is found.
# The maximum count is updated during traversal.
