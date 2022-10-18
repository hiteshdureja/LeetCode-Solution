class Solution {
public:
string countAndSay(int n) {
    if(n==1)
        return "1";
    string ans,temp;
    int count=1;
    int i=0;
    temp=countAndSay(n-1);
    for( i=0; i<temp.size()-1; i++){
        if(temp[i]==temp[i+1])
        count++;
        else
        {
            ans.push_back(count+48);
            ans.push_back(temp[i]);
            count=1;
        }
    }
    ans.push_back(count+48);
    ans.push_back(temp[i]);
    return ans;
}
};