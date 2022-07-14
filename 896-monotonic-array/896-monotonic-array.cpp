class Solution {
public:

 bool isMonotonic(vector<int>& nums) {
        int inc = 0,dec=0;
        for(int i = 1 ; i < nums.size(); i++){
            if(nums[i]-nums[i-1]>0) inc++;
            else if(nums[i]-nums[i-1] < 0) dec++;
            if(inc > 0 and dec > 0) return false;
        }
        return true;
    }
};