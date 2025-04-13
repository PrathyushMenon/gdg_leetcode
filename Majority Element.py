class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max, count= None,0
        for num in nums:
            if count == 0:
                max,count = num,1
            elif num == max:
                count += 1
            else:
                count -= 1
        
        return max
