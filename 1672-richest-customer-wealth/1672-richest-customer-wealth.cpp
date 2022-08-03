class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int count= 0;
        vector<int> a1;
        for(int i=0; i< accounts.size(); i++) {
            for(int j=0; j<accounts[i].size(); j++) {
                 count+=  accounts[i][j];
            }
            a1.push_back(count);
            count=0;
        }
        int max= a1[0], n= a1.size();
        for(int k=0; k< n; k++) {
            if(max< a1[k])
                max= a1[k];
        }
        return max;
    }
};
