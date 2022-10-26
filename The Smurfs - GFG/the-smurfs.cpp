//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findMin(int n, char a[]){
         vector<int> v(n);
        set<char> s;
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]=='R') x=x^1;
            else if(a[i]=='G') x^=2;
            else x=x^3;
            s.insert(a[i]);
        }
        if(x){
            return 1;
        }
        else return s.size()>1?2:n;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends