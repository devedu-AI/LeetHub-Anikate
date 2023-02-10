class Solution {
public:
       long long int mod=1000000007;
        
        long long solve(long long val,long long p){ // calculatin pow in log(n) time
        if(p==0) return 1;
        
        if(p%2==0)
        {
            return solve((val*val)%mod,p/2)%mod;
        }
        else
            return (val*solve((val*val)%mod,p/2))%mod;
        
    }
    int countGoodNumbers(long long int n) 
    {
        long long int p = n/2;
        long long int a1 = solve(20,p);
        if(n%2==0)
            return a1%mod;
        else
            return (5*a1)%mod;
    }
};