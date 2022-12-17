class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        
//         ------- BRUTE FORCE ---> APPROCH ----------
        
        
//         int i,j;
        
//         for( i=0;i<nums.size();i++)
//         {
//             int diff = target - nums[i];
//                 for(j=i+1;j<nums.size();j++)
//                 {       
//                     if(diff == nums[j])
//                         return {i,j};
//                 }
//         }
//             return {i,j};
        
//         }
        
//        --------- OPTIMAL --> APPROCH --------
        
        vector<int> ans;
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i]) != mp.end()) 
        
     // if found true and pointer not at map end --> we can say that element is found.
            {
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            
            mp[nums[i]]=i;
        }
        
        return ans;
    }
};