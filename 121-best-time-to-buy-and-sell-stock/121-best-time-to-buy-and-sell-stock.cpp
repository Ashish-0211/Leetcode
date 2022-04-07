class Solution {
public:
    int maxProfit(vector<int>& p) {
        // int ans = 0;
        // int curr = INT_MAX;
        // int size = prices.size();
        // for(int i=0;i<size;i++)
        // {
        //     curr = min(curr,prices[i]);
        //     ans = max(ans,prices[i]-curr);
        // }
        // return ans;
        int ans = 0;
        int curr = INT_MAX;
        int size = p.size();
        for(int i=0;i<size;i++)
        {
            curr = min(curr,p[i]);
            ans = max(ans,p[i]-curr);
        }
        return ans;
        // int ans = 0;
        // for(int i = 1;i<p.size();i++)
        // {
        //     if(p[i]>p[i-1])
        //         ans = max(p[i] - p[i-1],ans);
        // }
        // return ans;
    }
};