//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Node{
    public:
    Node* v[26];
    Node(){
        for(int i=0;i<26;i++){
            v[i] = NULL;
        }
    }
};

class Trie{
private:
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insert(string& s){
        Node* temp = root;
        for(int i=0;i<s.length();i++){
            if(temp->v[s[i]-'a']==NULL){
                Node* p = new Node();
                temp->v[s[i]-'a'] = p;
            }
            temp = temp->v[s[i]-'a'];
        }
    }
    void check(string& s, vector<vector<string>>& ans, vector<bool>& isFilled){
        Node* temp = root;
        for(int i=0;i<s.length();i++){
            if(temp->v[s[i]-'a']==NULL) break;
            temp = temp->v[s[i]-'a'];
            isFilled[i] = true;
            ans[i].push_back(s);
        }
    }
};


class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        Trie t;
        t.insert(s);
        sort(contact,contact+n);
        int len = s.length();
        vector<vector<string>> ans(len,vector<string>());
        vector<bool> isFilled(len,false);
        for(int i=0;i<n;i++){
            if(i>0 && contact[i]==contact[i-1]) continue;
            t.check(contact[i],ans,isFilled);
        }
        for(int i=0;i<len;i++){
            if(!isFilled[i]){
                ans[i] = {"0"};
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends