class Solution {
public:
    int search(vector<int>& arr, int k) {

        int start=0;
        int end=arr.size()-1;
        int mid= start+(end-start)/2;
        
        while(start<=end)
        {
            if(arr[mid]==k) return mid;
            else if(arr[mid]>k) end=mid-1;
            else start=mid+1;
            
            mid= start+(end-start)/2;
        }
        
        return -1;
    }
};