https://leetcode.com/problems/sort-colors/description/

void sortColors(vector<int>& nums) {
        int s,i=1;
        while(i<nums.size()){
            if(nums[i-1] > nums[i]){
                s = 0;
                for(int j=i-1; j>=0; j--){
                    if(nums[j] <= nums[i]){
                        s = j+1;
                        break;
                    }
                }
                swap(nums[i], nums[s]);
            }
            else 
                i++;
        }
    }

void sortColors(vector<int>& nums) {
        int zeros=0, twos=nums.size()-1, i=0;
        while(i<=twos){
            if(nums[i] == 0)
                swap(nums[zeros++], nums[i++]);
            else if(nums[i] == 2)
                swap(nums[twos--], nums[i]);
            else 
                i++;
        }
    }
