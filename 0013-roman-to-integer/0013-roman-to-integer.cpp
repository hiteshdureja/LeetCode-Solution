class Solution {
public:
    int romanToInt(string s) {
        int a=0;
        int l=s.length();
        for (int i=0;i<l;i++)
        {
            switch(s[i])
            {
                case 'M':
                    {
                        a=a+1000;
                        break;
                    }
                case 'D':
                    {
                        a=a+500;
                        break;
                    }
                case 'C':
                    {
                        if (s[i+1]=='D')
                        {
                            a=a+400;
                            i++;
                        }
                        else if (s[i+1]=='M')
                        {
                            a=a+900;
                            i++;
                        }
                        else
                            a=a+100;
                        break;
                    }
                case 'X':
                    {
                        if (s[i+1]=='L')
                        {
                            a=a+40;
                            i++;
                        }
                        else if (s[i+1]=='C')
                        {
                            a=a+90   ;
                            i++;
                        }
                        else
                            a=a+10;
                        break;
                    }
                case 'L':
                    {
                        a=a+50;
                        break;
                    }
                case 'V':
                    {
                        a=a+5;
                        break;
                    }
                
                case 'I' :
                    {
                        if (s[i+1]=='V')
                        {
                            a=a+4;
                            i++;
                        }
                        else if (s[i+1]=='X')
                        {
                            a=a+9   ;
                            i++;
                        }
                        else
                            a=a+1;
                        break;
                    }
            }
            
        }
        return a;
    }
};
