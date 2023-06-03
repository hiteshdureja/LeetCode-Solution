class Solution {
    public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1,mid;
        while(low<=high){
            mid=(low+(high-low)/2);
            if(nums.at(mid)==target)
                return mid;
            else if(nums.at(mid)<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return high+1;

    }
};