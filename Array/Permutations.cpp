https://leetcode.com/problems/permutations/description/

void permute(vector<int> &nums, vector<vector<int>> &res, int n){
        if(n == nums.size()-1)
            res.push_back(nums);
        for(int i=n;i<nums.size();i++){
            swap(nums[i], nums[n]);
            permute(nums, res, n+1);
            swap(nums[i], nums[n]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() <= 1)
            return {nums};
        vector<vector<int>> res;
        permute(nums, res, 0);
        return res;
    }
