class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m= 0, n=INT_MAX;
        for(int i=0; i<prices.size(); i++) {
            n=min(n, prices[i]);
            m=max(m, prices[i]- n);
        }
        return m;
    }
};
