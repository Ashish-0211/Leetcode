class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        int ans = 0;
        int i = 0;
        int j = p.size()-1;
        sort(p.begin(),p.end());
        while(i<=j)
        {
            if(p[i] + p[j] <= limit)
                i++;
            j--;
            ans++;
        }
        return ans;
    }
};