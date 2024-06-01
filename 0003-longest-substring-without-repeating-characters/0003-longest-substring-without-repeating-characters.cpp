class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> map;
        int r=0,l=0;
        int max_len =0;
        while(r<s.size()){
            if(map.find(s[r])!=map.end() && map[s[r]]>=l){
                l=map[s[r]]+1;
            }
            map[s[r]]=r;
            max_len=max(max_len,r-l+1);
            r++;
        }
        return max_len;
    }
};