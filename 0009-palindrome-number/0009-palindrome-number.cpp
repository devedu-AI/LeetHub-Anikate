class Solution {
public:
    bool isPalindrome(long long x) {
        
            long long temp=x;
		    long long rev=0;
		    
		    while(x>0)
		    {
		        long long rem=x%10;
		        rev=rev*10+rem;
		        x=x/10;
		    }
		    
		    if(temp==rev)
		        return true;
		    else
		        return false;
        
    }
};