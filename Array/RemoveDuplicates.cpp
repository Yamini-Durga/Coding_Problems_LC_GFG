https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

int removeDuplicates(vector<int>& nums) {
        int replaceIdx = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1])
                nums[replaceIdx++] = nums[i];
        }
        return replaceIdx;
    }
