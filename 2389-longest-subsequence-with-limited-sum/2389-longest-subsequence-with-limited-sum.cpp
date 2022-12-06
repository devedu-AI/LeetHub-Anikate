class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());
        
        vector<int> sums;
       
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            sums.push_back(sum);
        }
        
        vector<int> ans(queries.size(),0);
        
        for(int i=0;i<queries.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(sums[j]<=queries[i]) ans[i]=j+1;
                else break;
            }
        }
        
        return ans;
    }
};