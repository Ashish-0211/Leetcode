class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0,h = arr.size();
        while(l<=h)
        {
            int mid = l + (h - l)/2;
            if(arr[mid] < arr[mid+1] )
                l = mid + 1;
            else
                h = mid - 1;
        }
        return l;
    }
};