//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    	  int prev=-1,curr=0,sum=0,maxi=INT_MIN,tempPrev=-1;
	  for(int i=0;i<n;i++)
	  {
	      if(a[i]<0) sum=0;
	    
	      else
	      {
	          if(sum==0)
	          { 
	              if(i==0)            tempPrev=i;
	              else if(a[i-1]!=0)  tempPrev=i;
	          }
	          
	          sum+=a[i];
	          
	          if(sum>=maxi)
	          {
	              prev=tempPrev;
	              curr=i;
	              maxi=sum;
	          }
	      }
	  }
	  if(prev==-1) return {-1};
	  vector<int>ans;
	  for(int i=prev; i<=curr;i++)
	     ans.push_back(a[i]);
	     
	  return ans;
	    // code here
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends