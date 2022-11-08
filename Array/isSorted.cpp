https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

int isSortedArr(vector<int> nums, int n){
        bool isSorted = true;
        for(int i=1; i<n; i++){
            isSorted = nums[i-1] <= nums[i] ? true : false;
            if(!isSorted)
                return i;
        }
        return -1;
    }
    void reverseArr(vector<int>& nums, int l, int r){
        while(l < r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }
    }
    bool check(vector<int>& nums) {
        // int n = nums.size(), pos;
        // // if not sorted, returns position of index
        // pos = isSortedArr(nums, n);
        // if(pos == -1)
        //     return true;
        // // rotate array
        // reverseArr(nums, 0, pos-1);
        // reverseArr(nums, pos, n-1);
        // reverseArr(nums, 0, n-1);
        // // check again for sortedness
        // pos = isSortedArr(nums, n);
        // return pos == -1 ? true : false;

        int c = 0, n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i-1]>nums[i])
                c++;
        }
        if(nums[n-1] > nums[0])
            c++;
        return c <= 1;
    }
