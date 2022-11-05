//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int K) {
        unordered_map<int,int> ump;
        //Map of frequency built
        for(int i=0;i<N;i++) ump[arr[i]%K]++;
        int ans = 0;
        while(ump.size())
        {
            int A = ump.begin()->first ; 
            if(A!=0)
            {
                // we have to chosse either A' frequency or A'comp frequency
                if(A==K/2 && K%2==0) ans++,ump.erase(A);
                else
                {
                    int Acomp = K-A;
                    ans += max(ump[A],ump[Acomp]);
                    ump.erase(A);
                    ump.erase(Acomp);
                }
            }
            else
            {
                ans++;
                ump.erase(0);
            }
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends