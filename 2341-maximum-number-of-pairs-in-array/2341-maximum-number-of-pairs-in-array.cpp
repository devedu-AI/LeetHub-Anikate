class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
        int n = nums.size();
        int count=0;
        int left=0;
        
        // vector<int> hash(n+1);
        map<int,int> mp;
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        
        
        
//         for(int j=0;j<hash.size();j++)
//             {
//                 if(hash[j]%2==0) count=count+hash[j]/2;
//                 else 
//                 {
//                     left=left+hash[j]%2;
//                     count=count+hash[j]/2;
//                 }
//             }
        
        
        for(auto it : mp)
            {
                if(it.second%2==0) count=count+it.second/2;
                else 
                {
                    left=left+it.second%2;
                    count=count+it.second/2;
                }
            }
        
            
        ans.push_back(count);ans.push_back(left);
        
        
        // 1 - 2
        // 3 - 2
        // 2 - 3
            
            return ans;     
    }
};