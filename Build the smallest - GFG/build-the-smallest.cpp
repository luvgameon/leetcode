//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string buildLowestNumber(string num, int k);
// Driver program to test above function
int main()
{
    int t,n;
    string str;
    cin>>t;
    while(t--)
    {
    cin>>n;
    cin>>str;
    cout << buildLowestNumber(str, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


string buildLowestNumber(string num, int k)
{
    //code here.
    stack<char> st;

    int c = 0;

    int n = num.length();

    int i = 0;

    while(i<n)

    {

        char ch = num[i];

        while((st.empty()==false) && (st.top()-'0' > ch-'0') && (c<k))

        {

            st.pop();

            c++;

        }

        st.push(ch);

        i++;

    }

    

    while(st.empty()==false && c<k)

    {

        c++;

        st.pop();

    }

    

    string ans = "";

    while(st.empty()==false)

    {

        ans = ans + st.top();

        st.pop();

    }

 

    while(ans.back()=='0')

    {

        ans.pop_back();

    }

    if(ans.length()==0)

    {

        return "0";

    }

    reverse(ans.begin(),ans.end());

    return ans;


}