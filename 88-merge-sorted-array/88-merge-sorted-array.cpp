class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr[m+n];
        int i=0,j=0,k=0;
        
        while(i<m&&j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                arr[k]=nums1[i];
                k++;
                i++;
            }
            else
            {
                arr[k]=nums2[j];
                k++;
                j++;
            }
        }
        if (i<m)
        {
            for(int a=i;a<m;a++)
            {
                arr[k]=nums1[a];
                k++;
            }
        }
        else
        {
            for(int a=j;a<n;a++)
            {
                arr[k]=nums2[a];
                k++;
            }
        }
        for(int a=0;a<m+n;a++)
        {
            nums1[a]=arr[a];
        }
    }
};