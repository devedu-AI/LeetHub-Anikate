class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
        int i;
        
        for(i=0;i<=nums.size();i++)
        {
            if (find(nums.begin(), nums.end(), i) != nums.end() ) // item present 
                   continue;
            
            else
            {
                return i; break; // else if item not present return
            }
        }
        
        return i;
    }
};