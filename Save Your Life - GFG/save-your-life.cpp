//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
      string maxSum(string w,char x[], int b[],int n){
            map<char,int> mp;
            
            for(int i = 0; i < n; i++){
                mp[x[i]] = b[i];
            }
            
            string ans = "", temp = "";
            
            int sum = 0, mx = INT_MIN;
            
            for(int i = 0; i < w.size(); i++){

                if(sum < 0){
                    temp = "";
                    sum = 0;
                }
                
                if(sum >= 0){
                    if(mp.find(w[i]) != mp.end()){
                      sum += mp[w[i]];
                    }else{
                        sum += (int)w[i];
                    }
                    
                    temp += w[i];
                }
                
                if(sum > mx){
                    mx = sum;
                    ans = temp;
                }
                
            }
            
            return ans;
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends