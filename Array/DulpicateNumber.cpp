https://leetcode.com/problems/find-the-duplicate-number/description/

int findDuplicate(vector<int>& nums) {
        int duplicate;
        for(int i=0; i<nums.size(); i++){
            if(nums[abs(nums[i])]<0){
                 duplicate = abs(nums[i]);
                 break;
            }
            nums[abs(nums[i])] = -nums[abs(nums[i])];
        }
        return duplicate;
    }
