# week02-3.py 寫LeetCode
# LeetCode 1. TwoSum
#有一堆數字 nums 裡面[哪兩個]鄉家事,target
#nums[i] + nums[j] == target 找到i和j使得加起來是target
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box = {}

        for i, num in enumerate(nums):
            other = target - num
            if other in box:
                return [ box[other], i ]
            else:
                box[num] = i
