class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // int low = 0,high = grid.size();
        int res = 0;
        for(int i=0;i<grid.size();i++)
        {
            int high = grid[i].size()-1;
            // int count = 0;
            int low = 0;
            while(low<=high)
            {
                int mid = (low+high)/2;
                if(grid[i][mid]>=0)
                {
                    low = mid+1;
                }
                if(grid[i][mid]<0)
                {
                    res+=high-mid+1;
                    high = mid-1;
                }
            }

        }
        return res;
    }
};