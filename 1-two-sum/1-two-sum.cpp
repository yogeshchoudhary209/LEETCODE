class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a1;
        int i, j;
        for(i=0; i<(nums.size()-1); i++)
        {
            for(j=i+1; j<nums.size(); j++)
            {
                if((nums[i]+nums[j]) == target)
                {
                    a1.push_back(i);
                    a1.push_back(j);
                }    
            }    
        }   
        return a1;
    }
};
