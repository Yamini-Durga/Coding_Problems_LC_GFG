https://leetcode.com/problems/majority-element-ii/description/

// C++ code
vector<int> majorityElement(vector<int>& nums) {
        int maj1 = INT_MIN, maj2 = INT_MIN, c1 = 0, c2 = 0;
        vector<int> res;
        for(int num : nums)
        {
            if(maj1 == num)
            {
                c1++;
            }
            else if(maj2 == num)
            {
                c2++;
            }
            else if(c1 == 0)
            {
                maj1 = num; c1 = 1;
            }
            else if(c2 == 0)
            {
                maj2 = num; c2 = 1;
            }
            else{
                c1--;c2--;
            }
        }
        c1 = 0; c2 = 0;
        for(int num : nums){
            if(maj1 == num)
                c1++;
            else if(maj2 == num)
                c2++;
        }
        if(c1 > (nums.size()/3))  res.push_back(maj1);
        if(c2 > (nums.size()/3))  res.push_back(maj2);

        return res;
    }

// C# code
public IList<int> MajorityElement(int[] nums) {
        int maj1 = Int32.MinValue, maj2 = Int32.MinValue, c1 = 0, c2 = 0;
        IList<int> res = new List<int>();
        foreach(int num in nums)
        {
            if(maj1 == num)
            {
                c1++;
            }
            else if(maj2 == num)
            {
                c2++;
            }
            else if(c1 == 0)
            {
                maj1 = num; c1 = 1;
            }
            else if(c2 == 0)
            {
                maj2 = num; c2 = 1;
            }
            else{
                c1--;c2--;
            }
        }
        c1 = 0; c2 = 0;
        foreach(int num in nums){
            if(maj1 == num)
                c1++;
            else if(maj2 == num)
                c2++;
        }
        if(c1 > (nums.Length/3))  res.Add(maj1);
        if(c2 > (nums.Length/3))  res.Add(maj2);

        return res;
    }
