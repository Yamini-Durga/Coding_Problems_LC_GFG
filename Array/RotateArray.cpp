https://leetcode.com/problems/rotate-array/description/

void reverseArr(vector<int>& nums, int l, int r){
        while(l<r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>=n){
            k = k%n;
        }
        if(k != 0){
            reverseArr(nums, 0, n-1);
            reverseArr(nums, 0, k-1);
            reverseArr(nums, k, nums.size()-1);
        }
    }
