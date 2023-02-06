class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(nums):
            for j in range(nums):
                if i == j:
                    break

                if i + j == target:
                    return [i, j]

