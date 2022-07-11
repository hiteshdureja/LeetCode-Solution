class Solution {
public:
    bool canJump(vector<int>& nums) { int i = 0, cnt=0;
    for ( cnt = 0; i < nums.size() && i <= cnt; i++)
        cnt = max(i + nums[i], cnt);
    return i == nums.size();
}
};