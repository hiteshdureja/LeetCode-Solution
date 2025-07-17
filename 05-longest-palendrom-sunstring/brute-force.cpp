#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPalendriom(string s, int start, int last){
    while(start< last){
        if(s[start++]!=s[last--]){
            return false;
        }
    }
    return true;
}
int main()
{
    string a = "jrjnbctoqgzimtoklkxcknwmhiztomaofwwzjnhrijwkgmwwuazcowskjhitejnvtblqyepxispasrgvgzqlvrmvhxusiqqzzibcyhpnruhrgbzsmlsuacwptmzxuewnjzmwxbdzqyvsjzxiecsnkdibudtvthzlizralpaowsbakzconeuwwpsqynaxqmgngzpovauxsqgypinywwtmekzhhlzaeatbzryreuttgwfqmmpeywtvpssznkwhzuqewuqtfuflttjcxrhwexvtxjihunpywerkktbvlsyomkxuwrqqmbmzjbfytdddnkasmdyukawrzrnhdmaefzltddipcrhuchvdcoegamlfifzistnplqabtazunlelslicrkuuhosoyduhootlwsbtxautewkvnvlbtixkmxhngidxecehslqjpcdrtlqswmyghmwlttjecvbueswsixoxmymcepbmuwtzanmvujmalyghzkvtoxynyusbpzpolaplsgrunpfgdbbtvtkahqmmlbxzcfznvhxsiytlsxmmtqiudyjlnbkzvtbqdsknsrknsykqzucevgmmcoanilsyyklpbxqosoquolvytefhvozwtwcrmbnyijbammlzrgalrymyfpysbqpjwzirsfknnyseiujadovngogvptphuyzkrwgjqwdhtvgxnmxuheofplizpxijfytfabx";
    int startIndex= 0;
    std::cout << "Original string:" << std::endl <<a<<endl;
    int maxlength = 0;
    for(int i = 0; i< a.size() ;i++){
        for(int j = i; j< a.size();j++){
            bool isP = isPalendriom(a,i,j);
            int len = j-i+1;
            if(isP and maxlength<len){
                maxlength = len;
                startIndex = i;
            }
        }
    }
    cout <<"max palandrom Length: " << maxlength<<endl;
    cout<<"longest palendrom substring: ";
    for(int i=startIndex;i<startIndex+maxlength;i++){
        cout<< a[i];
    }
    return 0;
}