#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "TUF is great for  interview preparation";
    std::cout << "Original string:" << std::endl <<a<<endl;
    a =  " " + a;
    string str = "";
    string ans = "";
    for(int i = a.size()-1; i>=0;i--){
        if(a[i] == ' '){
            if(str != ""){
                
            }
            ans += str + " ";
            str="";
        }
        else{
            str = a[i]+str;
        }
    }
    if (!ans.empty() && ans.back() == ' ')
        ans.pop_back();
    std::cout << "Reversed string:" << std::endl<<ans;
    return 0;
}