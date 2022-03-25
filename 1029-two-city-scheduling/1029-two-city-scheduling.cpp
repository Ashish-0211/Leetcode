class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& c) {
        int ans = 0;
         vector<int> diff;
        // int total = 0;
        for(int i = 0;i<c.size();i++)
        {
            ans+=c[i][0];
            diff.push_back(c[i][1] - c[i][0]);
        }
        sort(diff.begin(),diff.end());
        for(int i = 0;i<c.size()/2;i++)
            ans+=diff[i];
        return ans;
    }
};