class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a1;
        for(int i=0; i<n; i++) {
            a1.push_back(nums[i]);
            a1.push_back(nums[i+n]);
        }
        return a1;
    }
};
