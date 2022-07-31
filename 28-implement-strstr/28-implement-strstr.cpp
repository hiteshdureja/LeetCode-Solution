class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m =needle.length();
        int s=0;
        int f=0;
        for(int i=0;i<n;i++){
            if(haystack[i] == needle[s]){
                int a = i;
                while(s<m && a<n){
                    if(haystack[a] == needle[s]){
                        a++;
                        s++;
                        f=1;
                    }
                    else if(haystack[a] != needle[s]){
                        s=0;
                        f=0;
                        break;
                    }
                }
                if(a==n && s<m)
                    f=0;
                if(f==1) return i;
                s=0;
            }
        }
        return -1;
    }
};