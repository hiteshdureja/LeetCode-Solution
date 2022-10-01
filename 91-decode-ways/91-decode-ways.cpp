class Solution {
public:
    int f(int ind, string& s, vector<int> &dp){
 				int n = s.size();
 				if(ind == n) return 1;
 				if(s[ind] == '0') return 0;
 				if(dp[ind] != -1) return dp[ind];
 				int res = f(ind+1, s,dp);
 				if(ind < n-1 and (s[ind] == '1' or (s[ind] == '2' and s[ind+1]-'0' < 7)))
 					res += f(ind+2, s,dp);
 				return dp[ind] = res;
 			}
    int numDecodings(string s) {
 				int n = s.size();
 				vector<int> dp(n,-1);
 				return s.size() == 0 ? 0 : f(0,s,dp);
 			}
};