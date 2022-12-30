class Solution {
public:
    int majorityElement(vector<int>& arr) {
            
        int count=0;
        int element=0;
        
        for(int num: arr)
        {
            if(count==0) element=num; 
            if(num==element) count++;
            else count--;
        }
        
        return element;
    }
};