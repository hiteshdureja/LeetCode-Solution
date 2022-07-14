class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        m+=n;
        for(int i=0;i<m;i++){
            if(i>=(m-n)){
                arr1[i]=arr2[m-i-1];
            }
        }
        sort(arr1.begin(),arr1.end());
    }
};