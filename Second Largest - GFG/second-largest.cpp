//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int largest(int arr[], int n)
	{
	  int max=INT_MIN;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>max) 
	            max=arr[i];
	    }
	    
	   return max;
	}
	
	int print2largest(int arr[], int n)
	{
	   int mx=largest(arr,n);
	   
	   int sec_largest=-1;
	   
	   for(int i=0;i<n;i++)
	   {
	        if(arr[i]>sec_largest && arr[i]!=mx) 
	            sec_largest=arr[i];    
	   }
	   
	   return sec_largest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends