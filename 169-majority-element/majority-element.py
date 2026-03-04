class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)/2
        visited = {}
        for num in nums:
            visited[num]=visited.setdefault(num,0)+1 
        for i in visited:
            if visited[i]>n:
                return i

        