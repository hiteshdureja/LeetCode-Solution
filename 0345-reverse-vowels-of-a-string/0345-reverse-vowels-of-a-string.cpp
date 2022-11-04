class Solution {
public:
    string reverseVowels(string s) {
            vector<int> v;
    int n1 = s.length();
    for (int i = 0; i < n1; i++)
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
            v.push_back(i);
    
    int n2 = v.size();
    for (int i = 0; i < n2 / 2; i++)
        swap(s[v[i]], s[v[n2 - 1 - i]]);  

    return s;
}
    
};