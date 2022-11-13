class Solution {
public:
    string reverseWords(string s) {
int n=s.length();
int i=0;
int j=0;
string res="";
while(i<n){
while(s[i]==' '){
i++;
j++;
}
while(s[j]!=' '&&j<n){
j++;
}
string str=s.substr(i,(j-i));
res=" "+str+res;
j++;
i=j;
}
int st=0;
while(res[st]==' '){
st++;
}
return res.substr(st);
}
};