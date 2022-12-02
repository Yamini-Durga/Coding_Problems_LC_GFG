https://leetcode.com/problems/next-permutation/description/

void nextPermutation(vector<int>& nums) {
        int lexChangeIdx=-1, nextIdx, size=nums.size();
        for(int i=size-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                lexChangeIdx = i;
                break;
            }
        }
        if(lexChangeIdx != -1){
            for(int i=size-1; i>=0; i--){
                if(nums[lexChangeIdx] < nums[i]){
                    nextIdx = i;
                    break;
                }
            }
            swap(nums[lexChangeIdx], nums[nextIdx]);
            reverse(nums.begin()+lexChangeIdx+1, nums.end());
        }
        else{
            reverse(nums.begin(), nums.end());
        }
    }
