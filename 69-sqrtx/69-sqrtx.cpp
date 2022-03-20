class Solution {
public:
    int mySqrt(int x) {
        long long int l = 0,h = x;
        while(l<=h)
        {
            long long int mid = h+l>>1;
            if(mid * mid > x)
                h = mid-1;
            else
                l = mid + 1;
        }
        return h;
    }
};