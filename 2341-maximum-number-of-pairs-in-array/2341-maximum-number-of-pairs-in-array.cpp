class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        int n = nums.size(),count=0,left=0;
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++) mp[nums[i]]++;       

        for(auto it : mp)
            {
                if(it.second%2==0) count=count+it.second/2;
                else 
                {
                    left=left+it.second%2;
                    count=count+it.second/2;
                }
            }  
        return {count,left};     
    }
};