class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        if(n == 1 || m == 1)
            return mat;
        // // vector<int> temp;
        // vector<vector<int>> ans;
        // for(int i = 0;i<m;i++)
        // {
        //     vector<int> temp;
        //     int j = i;
        //     int mi = 0,mj = i;
        //     while(mi<n && mj<m)
        //         temp.push_back(mat[mi][mj]),mi++,mj++;
        //     sort(temp.begin(),temp.end());
        //     while(auto x : temp)
        //         ans[i][j] = x,i++,j++;
        //     temp.clear();
        // }
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<n;i++)
            for(int j = 0;j<m;j++)
                mp[i-j].push_back(mat[i][j]);
        for(int k = -(m - 1);k<n;k++)
            sort(mp[k].begin(),mp[k].end());
        for(int i = n-1;i>=0;i--)
            for(int j = m-1;j>=0;j--)
            {
                mat[i][j] = mp[i-j].back();
                mp[i-j].pop_back();
            }
        return mat;
    }
};