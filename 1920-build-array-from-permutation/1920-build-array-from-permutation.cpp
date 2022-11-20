class Solution {
public:
    vector<int> buildArray(vector<int> &nums) {
        
        /*  a=3,b=4,  n=6;
            
            storing both the value of a & b in a;
            
            a=a+(b%n)*n; --> a=3+(4%6)*6 = 3+4*6 = 27
            a=a%n; --> a = 27%6 = 3
            b=a/n; --> b = 27/6 = 4
        */
        
        int n = nums.size();
        
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]+(nums[nums[i]]%n)*n;
            
        for(int i=0;i<nums.size();i++)
            nums[i]=nums[i]/n;
        
        return nums;
        
    }
};