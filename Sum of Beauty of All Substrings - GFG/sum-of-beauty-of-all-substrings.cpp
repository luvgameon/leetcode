//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
         int n=s.size();

         int sum=0;

            for(int i=0;i<n;i++)

        {

               int freq[26]={0};

           for(int j=i;j<n;j++){

                int mi=INT_MAX,ma=INT_MIN;

                freq[s[j]-'a']++;

                for(int k=0;k<26;k++){

                     if(freq[k]!=0)

                     {

                        mi = min(mi,freq[k]);

                         ma = max(ma,freq[k]);

                     }

                }

                 sum += (ma-mi);

            }

        }

         return sum;

 

    }
        // Your code goes here
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends