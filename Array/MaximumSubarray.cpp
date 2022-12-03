https://leetcode.com/problems/maximum-subarray/description/

int maxSubArray(vector<int>& nums) {
        int l=0, maxSum = INT_MIN, curSum=0;
        for(int r=0; r < nums.size(); r++){
            curSum += nums[r];
            maxSum = max(maxSum, curSum);
            if(curSum < 0){
                curSum = 0;
                l = r+1;
            }
        }
        return maxSum;
    }
