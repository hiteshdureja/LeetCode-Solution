class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        vector<int> mp(26,0);
        for(auto i:s){
            cout<<i;
            mp[i-'a']++;
        }
        for(auto i:t){
            mp[i-'a']--;
        }
        for(int i=0;i<26;i++){
            if(mp[i])
                return false;
        }
        return true;
    }
};