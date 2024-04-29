class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximum=0;
        int start=0,end=height.size()-1;
        int h,w;
        while(start<end){
            h=min(height[start],height[end]);
            w=end-start;
            if(h*w>maximum){
                maximum=h*w;
            }
            if(height[start]>height[end])
            {
                end--;
            }
            else{
                start++;
            }
        }
        return maximum;
    }
};