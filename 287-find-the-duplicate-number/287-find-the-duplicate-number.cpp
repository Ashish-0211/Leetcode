class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for(int i : nums)
        {
            if(temp.find(i)!=temp.end())
                return i;
            else
                temp.insert(i);
        }
        return -1;
        // int temp = 0;
        // for(int i = 0;i<nums.size();i++)
        //   for(int j = i+1;j<nums.size();j++)
        //   {  if(nums[i]^nums[j] == 0)
        //       { temp = nums[j];
        //        break;}
        //   }
        // return temp;
    }
};