class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string s="";
        for(int i=1;i<=n;i++){
            s="";
            if(i%3==0)
                s+="Fizz";
            if(i%5==0)
                s+="Buzz";
            if(i%3 and i%5){
                s=to_string(i);
            }
            ans.push_back(s);
        }
        return ans;
    }
};