class Solution {
public:
    int dp[31][1001];
    int mod = 1e9 + 7;
    int helper(int n,int k,int target){
        if(n==0) return target==0;
        if(target < 0) return 0;
        if(dp[n][target] != -1) return dp[n][target];
        long long sol = 0;
        for(int j=1;j<=k;j++){
            sol = (sol + helper(n-1,k,target - j))%mod;
        }     
        return dp[n][target] = sol;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return helper(n,k,target);
    }
};