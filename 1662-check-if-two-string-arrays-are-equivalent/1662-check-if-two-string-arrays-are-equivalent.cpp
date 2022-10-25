class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string res1 = "";
        for(auto word : word1)
        {
            res1 += word;
        }
        string res2 = "";
        for(auto word : word2)
        {
            res2 += word;
        }
        return res1 == res2;
    }
};
