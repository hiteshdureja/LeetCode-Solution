class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int N = s.size();
        int sgn = 1;
        while(i < N && s[i] == ' ') i++;
        if(s[i] == '-' || s[i] == '+') {
            if(s[i] == '-'){
                sgn = -1;
            }
            i++;
        }
        long long res = 0;
        while(i < N && s[i] >= '0' && s[i] <= '9') { 
            res = 10*res + sgn*(s[i] - '0');
            i++; 
            if(res > INT_MAX) return INT_MAX;
            else if(res < INT_MIN) return INT_MIN;
        }
        return res;
    }
};