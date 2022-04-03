class Solution {
public:
    int findTheDistanceValue(vector<int>& A, vector<int>& B, int d) {
        // // sort(arr1.begin(),arr1.end());
        // // sort(arr2.begin(),arr2.end());
        // int ans = 0;
        // for(int i = 0;i<arr1.size();i++)
        // {
        //     for(int j = 0;j<arr2.size();j++)
        //     {
        //         if(abs(arr1[i] - arr2[j])<=d )
        //             ans++;
        //     }
        // }
        // return ans;
        int ans = 0;
        for (int i = 0; i < A.size(); ++i) {
            bool found = false;
            for (int j = 0; j < B.size() && !found; ++j) {
                if (abs(A[i] - B[j]) <= d) found = true;
            }
            if (!found) ++ans;
        }
        return ans;
    }
};