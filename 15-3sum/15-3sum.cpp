class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        if(nums.size()<3)
        return {};
        if(nums[0]>0)
            return {};
      int size = nums.size();
        unordered_map<int,int> mp;
        for(int i = 0;i<size;i++)
            mp[nums[i]] = i;
        vector<vector<int>> ans;
        for(int i = 0;i<size-2;i++)
        {
            if(nums[i]>0)
                break;
            for(int j = i+1;j<size-1;j++)
            {
                int temp = -1*(nums[i] + nums[j]);
                if(mp.count(temp) && mp.find(temp)->second>j)
                    ans.push_back({nums[i],nums[j],temp});
                j = mp.find(nums[j])->second;
            }
            i = mp.find(nums[i])->second;
        }
        return ans;
    }
};