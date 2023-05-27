class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                count++;
            }
            else{
                mx=max(mx,count);
                cout<<mx<<endl<<count;
                count=0;
            }
        }
        mx=max(mx,count);
        return mx;
    }
};