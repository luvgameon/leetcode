//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
    int maxDistance(int arr[], int n) 
    { 
        int mx1 = INT_MIN, mn1 = INT_MAX, mx2 = INT_MIN, mn2 = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            mx1 = max(mx1, arr[i] + i);
            mn1 = min(mn1, arr[i] + i);
            mx2 = max(mx2, -arr[i] + i);
            mn2 = min(mn2, -arr[i] + i);
        }
        return max((mx1 - mn1), (mx2 - mn2));
    } 
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends