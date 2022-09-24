bool isValidNum(string str)
{    
         if (str.size() > 3)
             return false;
         int numberStr = stoi(str);
         if (numberStr >255)
             return false;
         if (numberStr>=0 && str!= to_string(numberStr))
             return false;
         return true; 
}

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        
        vector<string> result;
        int l = s.size();
        for ( int i =1; i< 1+3; i++)
        {
           for(int j =i+1; j< i+1+3; j++)
               {
                   for (int k = j+1; k < l; k++)
                       {
                           string d = s.substr(k);
                    
                           if (!isValidNum(d))
                               {
                                   continue;
                               }
                           string c = s.substr(j, k -j);
      
                           if (!isValidNum(c))
                               {
                                   continue;
                               }
                           string b = s.substr(i, j -i);
                           if (!isValidNum(b))
                               {
                                   continue;
                               }
                           string a = s.substr(0, i);
                           if (!isValidNum(a))
                               {
                                   continue;
                               }                           
                           result.push_back( a+"."+b+"."+c+"."+d);
                       }
               }
        }
    return result;  
    }
};