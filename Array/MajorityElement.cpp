https://leetcode.com/problems/majority-element/description/

// C++ code
int majorityElement(vector<int>& nums) {
        // Moore's voting algorithm
        int count = 0, majorEle;
        for(int i=0; i<nums.size(); i++){
            if(count == 0){
                 majorEle = nums[i];
                 count = 1;
            }
            else
                count += (nums[i] == majorEle) ? 1 : -1;
        }
        return majorEle;
    }

// C# code
public int MajorityElement(int[] nums) {
        // Moore's voting algorithm
        int count = 0, majorEle = Int32.MinValue;
        for(int i=0; i<nums.Length; i++){
            if(count == 0){
                 majorEle = nums[i];
                 count = 1;
            }
            else
                count += (nums[i] == majorEle) ? 1 : -1;
        }
        return majorEle;
    }
