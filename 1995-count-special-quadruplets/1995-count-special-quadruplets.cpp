class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        unordered_map<int, int> mp;
        
        for(int i = 1; i < n - 2; i++){
            for(int j = 0; j < i; j++)
                mp[nums[i] + nums[j]]++;
            
            for(int k = i + 2; k < n; k++)
                ans += mp[nums[k] - nums[i + 1]];
        }
        
        return ans;
    }
};