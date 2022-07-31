class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m =needle.length();
        int l=0;
        int f=0;
        for(int i=0;i<n;i++){
            if(haystack[i] == needle[l]){
                int a = i;
                while(l<m && a<n){
                    if(haystack[a] == needle[l]){
                        a++;
                        l++;
                        f=1;
                    }
                    else if(haystack[a] != needle[l]){
                        l=f=0;
                        break;
                    }
                }
                if(a==n and l<m)
                    f=0;
                if(f==1) 
                    return i;
                l=0;
            }
        }
        return -1;
    }
};