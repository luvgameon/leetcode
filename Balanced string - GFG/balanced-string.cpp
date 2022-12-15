//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
   string BalancedString(int N) {

       string ans="";

       

       int c=N/26;

       int rem=N%26;

       

       while(c>0){

           int i=0;

           while(i<26){

               ans.push_back('a'+i);

               i++;

           }

           c--;

       }

       if(rem%2==0){

           for(int i=0;i<rem/2;i++){

               ans.push_back('a'+i);

           }

           for(int i=26-rem/2;i<26;i++){

               ans.push_back('a'+i);

           }

       }

       else{

           int sum=0;

           int r=N;

           while(r!=0){

               sum=sum+r%10;

               r=r/10;

           }

           if(sum%2==0){

               for(int i=0;i<(rem+1)/2;i++){

                   ans.push_back('a'+i);

               }

               for(int i=26-(rem-1)/2;i<26;i++){

                   ans.push_back('a'+i);

               }

           }

           else{

               for(int i=0;i<(rem-1)/2;i++){

                   ans.push_back('a'+i);

               }

               for(int i=26-(rem+1)/2;i<26;i++){

                   ans.push_back('a'+i);

               }

               

           }

       }

       return ans;

       

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends