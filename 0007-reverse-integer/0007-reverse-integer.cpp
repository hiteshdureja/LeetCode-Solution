class Solution {
public:
    int reverse(int x) {
        int ans = 0, min = INT_MIN, max=INT_MAX ;
        while (x){
            int digit = x % 10 ;
            if (ans < min/10 || ans > max/10 ) 
                return 0 ;
            ans = ans*10 + digit ;
            x /= 10 ;
        }
        return ans ;
    }
};