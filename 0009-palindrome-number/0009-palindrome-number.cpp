class Solution {
public:
    bool isPalindrome(long int x) {
        long int n,digit, rev = 0;
        n=x;
        if (x<0)
        {
            x=-x;
             do
        {
         digit = x % 10;
         rev = (rev * 10) + digit;
         x = x/ 10;
     } while (x != 0);
            x=-x;
     cout << " The reverse of the number is: " << rev << endl;
     if (n == rev)
         return true;
     else
         return false;
        }
        else
        {
             do
     {
         digit = x % 10;
         rev = (rev * 10) + digit;
         x = x/ 10;
     } while (x != 0);
     cout << " The reverse of the number is: " << rev << endl;
     if (n == rev)
         return true;
     else
         return false;
        }        
    }
};