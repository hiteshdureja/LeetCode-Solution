class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
    unordered_map<char,int>mp;
        for(int i=0;i<order.length();i++) 
            mp[order[i]]=i;
        int n=words.size();
        for(int i=0;i<n-1;i++)
        {
            string first=words[i];
            string second=words[i+1];
            int j=0;
            bool flag=false;
            for( j=0;j<min(first.length(),second.length());j++)
            {
                if(mp[first[j]]< mp[second[j]])
                {  
                     flag=true;
                    break;
                }
                else if(mp[first[j]]==mp[second[j]]) continue;
                else return false;
            }
            if(first.length()>second.length() && !flag) 
            {
                return false;
            }

        }
        return true;
    }
};