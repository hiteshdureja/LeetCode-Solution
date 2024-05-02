class Solution {
public:
    int reverse(int x) {
        long ans=0;
        bool flag=false;
        long y=x;
        long negative=y*-1;
        if(negative>INT_MAX){
            return 0;
        }
        if(x<0){
            flag=true;
            x*=-1;
        }
        while(x>0){
            // cout<<" "<<x%10;
            ans+=x%10;
            ans*=10;
            // cout<<" "<<ans;
            x/=10;
        }
        if(flag){
            ans*=-1;
        }
        ans/=10;
        if(ans>=INT_MAX || ans<INT_MIN)
            return 0;
        return ans;
    }
};