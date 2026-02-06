class Solution {
public:
    int floorSqrt(int n) {
        int l = 0, r = n, ans = 0;

        while(l <= r){
            long long mid = l + (r - l)/2;

            if(mid * mid <= n){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return ans;
    }
};
