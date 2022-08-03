class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size(), count= 0;
        for(int i=0; i< n; i++) {
           if(nums[i] != i) {
               return i;
               count= 1;
           }   
        }
        if(count == 0)
            return n;
        return -1;
    }
};
