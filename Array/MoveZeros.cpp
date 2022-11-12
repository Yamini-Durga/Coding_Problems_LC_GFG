https://leetcode.com/problems/move-zeroes/description/

void moveZeroes(vector<int>& nums) {
    int zIdx = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != 0)
            nums[zIdx++] = nums[i];
    }
    while(zIdx < nums.size())
        nums[zIdx++] = 0;
}
