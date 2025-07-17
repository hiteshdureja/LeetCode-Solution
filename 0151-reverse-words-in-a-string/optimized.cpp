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
    for(int i = a.size(); i>=0;i--){
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
    std::cout << "Reversed string:" << std::endl<<ans;
    return 0;
}