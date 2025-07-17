#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "TUF is great for  interview preparation";
    std::cout << "Original string:" << std::endl <<a<<endl;
    string str = "";
    stack<string> words;
    for (char ch : a){
        if(ch==' '){
            if(str != ""){
                words.push(str);
            str = "";
            }
            
        } else {
            str+=ch;
        }
    }
    words.push(str);
    int len = words.size();
    string ans="";
    for(int i = 0; i<len; i++){
        std::cout << words.top() << std::endl;
        ans+= words.top()+" ";
        words.pop();
    }
    std::cout << "Reversed string:" << std::endl<<ans;
    return 0;
}