class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        auto ins_idx = nums1.size();
        while(ins_idx--)
            if(m == 0)
                nums1[ins_idx] = nums2[--n];
            else if(n == 0)
                nums1[ins_idx] = nums1[--m];
            else if(nums1[m - 1] <= nums2[n - 1])
                nums1[ins_idx] = nums2[--n];
            else
                nums1[ins_idx] = nums1[--m];
    }
};