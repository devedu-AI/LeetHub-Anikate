class Solution {
public:       
     void reverse(vector<int>& nums, int start, int end)
	{
	    while(start < end)
	    {
	        int temp=nums[start];
	        nums[start]=nums[end];
	        nums[end]=temp;
	        start++;
	        end--;
	    }
	}
        
     void rotate(vector<int>& nums, int k) { 
       int n=nums.size();
       k=k%n;
       int k1=n-k;
	   
	   reverse(nums,0,k1-1);
	   reverse(nums,k1,n-1);
	   reverse(nums,0,n-1);
	} 

};