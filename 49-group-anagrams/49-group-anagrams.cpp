class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(string str : strs)
        {
            string temp = str;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str);
        }
        for(auto &u : mp)
            ans.push_back(u.second);
        return ans;
    }
};