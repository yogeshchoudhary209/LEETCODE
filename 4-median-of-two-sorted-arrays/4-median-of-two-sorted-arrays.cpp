class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        for(int i=0; i<nums1.size(); i++)
            nums3.push_back(nums1[i]);
        for(int j=0; j<nums2.size(); j++)
            nums3.push_back(nums2[j]);
        sort(nums3.begin(), nums3.end());
        double mid;
        int n= nums3.size();
        if(nums3.size()%2==0)
            return (double)(nums3[(n-1)/2]+nums3[n/2]) / 2.0;
        else
            return (double)nums3[nums3.size()/2];
    }
};
