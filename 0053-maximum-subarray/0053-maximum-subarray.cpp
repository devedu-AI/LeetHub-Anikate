class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
          
        int CurrSum=0, MaxSum=nums[0];
        
        for  (int i=0;i<nums.size();i++)
        {
            // CurrSum = max(CurrSum+i,i);
            CurrSum = CurrSum + nums[i];
            
            if(CurrSum>MaxSum){
                MaxSum=CurrSum;
            }
            
            if(CurrSum<0)
            {
                CurrSum=0;}
        }
        
        return MaxSum;
        
    }
};