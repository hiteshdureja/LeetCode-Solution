class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        int last=s.size()-1;
        while(last>=0){
            if(s[last]==' ' && len==0){
                last--;
                continue;
            }
            else if(s[last]==' '&& len>0){
                return len;
            }
            else{
                last--;
                len++;
            }
        }
        return len;
    }
};