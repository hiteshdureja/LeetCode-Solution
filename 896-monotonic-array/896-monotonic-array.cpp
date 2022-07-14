class Solution {
public:
bool isMonotonic(vector<int>& nums) {

int N = nums.size();
bool inc = true;
bool dec = true;

for (int i = 0; i < N - 1; i++) {
    if (nums[i] > nums[i + 1]) {
        inc = false;
    }

}

for (int i = 0; i < N - 1; i++) {
    if (nums[i] < nums[i + 1]) {
        dec = false;
    }
}

return inc || dec;
}
};