class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        vector<int> v3;
        
        v3.insert(v3.end(), nums1.begin(), nums1.end());
        v3.insert(v3.end(), nums2.begin(), nums2.end());
        
        sort(v3.begin(),v3.end());
        
        if (v3.size()%2!=0)  return v3[v3.size() / 2];
        else return (float)(v3[(v3.size() / 2)-1] + v3[v3.size()/2])/2;
        
    }
};