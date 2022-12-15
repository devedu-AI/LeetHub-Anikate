class Solution {
public:
    int digsum(int n)
    {
        int sum=0,temp=0;
        
        while(n>0)
        {
            temp=n%10;
            sum=temp*temp + sum;
            n=n/10;
         }
        return sum;
    }
    
    bool isHappy(int n)
    {
        int temp2 = n;
        
        while(1)
        {
            if(temp2==89) return false;
            
            if(temp2==1) return true;
            
            temp2=digsum(temp2);
        }
        
    }
};