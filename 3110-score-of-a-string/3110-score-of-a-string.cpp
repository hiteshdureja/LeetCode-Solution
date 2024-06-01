class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int i=0;i<s.size()-1;i++){
            int a;
            if(s[i]>s[i+1])
            {
                a=s[i]-s[i+1];
            }
            else
                a=s[i+1]-s[i];
            score+=a;
        }
        return score;
    }
};