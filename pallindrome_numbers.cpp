//pallindrome numbers 
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        else if(x%10==0 && x!=0)
        return false;
        else 
        {
            int x_copy=x;
            long long int num=0;
            while(x_copy>0)
            {
                int rem=x_copy%10;
                num=num*10+rem;
                x_copy/=10;
            }
            if(num==x)
            return true;
            else
            return false;
        }
    }
};
