class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
   
    // SOLVING BY DUCH NATIONAL FLAG ALGORITHM 
    //TIME Complexity - O(N), SPACE COMPLEXITY - O(1) 
        
        int n = nums.size();
        int low=0,mid=0,high=n-1;
        
        while(mid<=high)
        {
            switch (nums[mid])
            {
                
                case 0: // If Element is 0
                    swap(nums[low++],nums[mid++]); 
                    break;
                    
                case 1:  // If Element is 1
                    mid++;
                    break;
                    
                case 2: // If Element is 2
                    swap(nums[mid],nums[high--]); 
                    break;
            }
        }     
    }
};