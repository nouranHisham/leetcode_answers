class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        mxsum=nums[0]
        currsum=0
        for i in nums:
            if currsum<0:
                currsum=0
            currsum+=i
            mxsum=max(mxsum,currsum)
        return mxsum
