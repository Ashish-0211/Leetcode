class Solution {
public:
    int sum(vector<int> v)
    {
        int n = v.size()-1;
        int l = 0,h = n,mid = 0;
        while(l<=h)
        {
            // mid = l + (h-l)/2;
            mid = (l+h)>>1;
            if(v[mid] == 1) l = mid + 1;
            else h = mid - 1;
        }
        return l+1;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int,int> mp;
        int n = mat.size();
        int m = mat[0].size();
        for(int i =0;i<n;i++)
        {
            int temp = sum(mat[i]);
            mp.insert(pair<int,int>(temp,i));
        }
        vector<int> ans;
        int r = 0;
        for(auto &i : mp)
        {
            r++;
            if(r<=k)
                ans.push_back(i.second);
        }
        return ans;
    }
};