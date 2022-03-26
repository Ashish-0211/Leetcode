class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0,n = nums.size()-1,h = n;
        // int mid = 0;
        while(l<=h)
        {
            int mid = (l+h)>>1;
            // int mid = l + (h-l)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target)h = mid - 1;
            else l = mid + 1;
        }
        return -1;
        // int n = nums.size()-1;
        // int low = 0, high = n;
        // while( low <= high){
        //     int mid = low + (high-low)/2;
        //     if (nums[mid] == target) return mid;
        //     else if (nums[mid] > target) high = mid -1;
        //     else low = mid + 1;
        // }
        // return -1;
    }
};