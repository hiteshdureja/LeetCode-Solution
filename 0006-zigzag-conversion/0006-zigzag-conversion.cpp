class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> res(numRows,"");
        string ans = "";
        int idx = 0;
        while(idx<s.size()){
            for(int i = 0;i<numRows && idx<s.size();i++){
                res[i].push_back(s[idx]);
                idx++;
            }
            for(int i = numRows -2;i>0 && idx<s.size();i--){
                res[i].push_back(s[idx]);
                idx++;
            }
        }
        for(string str: res){
            ans+=str;
        }
        return ans;
    }
};