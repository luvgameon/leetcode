class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& s) {
        stack<int>st;
        vector<int>v;
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
            st.push(s[i]);
        }
        for(int i=n-1;i>=0;i--)
        {
            if(st.top()>s[i])
            {
                v.push_back(st.top());
            }
            else{
                while(!st.empty() && st.top()<=s[i])
                {
                    st.pop();

                }
                if(!st.empty() && st.top()>s[i])
                {
                    v.push_back(st.top());

                }
                else{
                    v.push_back(-1);
                }
               
            }
            st.push(s[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};