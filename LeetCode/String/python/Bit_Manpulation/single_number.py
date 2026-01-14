


class Solution:
    def singleNumber(self, nums: list[int]) -> int:
        if len(nums) == 1 :
            return nums[0]
        for i in nums :
            single_number = True 
            for j in nums :
                if (i != j and nums[i] == nums[j]) :
                    single_number = False
            if single_number == True :
                return nums[i]





if __name__ == '__main__' :
    a = Solution()
    nums = [4,1,2,1,2]
    result = a.singleNumber(nums)
    print(result)