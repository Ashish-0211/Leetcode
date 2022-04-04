#define ll long long int
class Solution {
public:
    int mySqrt(int x) {
       ll l = 0,h = x;
        while(l<=h){
            ll m = (l+h)>>1;
            if(m * m > x)h = m - 1;
            else l = m + 1;
        }
        return h;
    }
};