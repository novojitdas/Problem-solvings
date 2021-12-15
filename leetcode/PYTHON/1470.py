class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        newList = []
        for i in range(n):
            newList += [nums[i]]+[nums[i+n]]
        return newList
