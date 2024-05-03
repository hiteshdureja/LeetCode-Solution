class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int last=nums.size()-1;
        int start=0;
        while(start<=last){
            if(nums[start]==val){
                nums[start]=nums[last];
                nums[last--]=NULL;
            }
            else{
                start++;
            }
        }
        return last+1;
    }
};