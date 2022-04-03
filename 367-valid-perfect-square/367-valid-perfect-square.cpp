#define ll long long int
class Solution {
public:
    bool isPerfectSquare(int num) {
        ll l = 0,h = num;
        while(l<=h)
        {
            ll mid = (l+h)>>1;
            if(mid*mid>num)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return h*h == num;
    }
};