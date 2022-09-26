class Solution {
public:
    string decodeString(string s) {
       int n=s.size();
        stack<char> stk;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]!=']')
            {
                stk.push(s[i]);
            }
            else
            {
                string ss="";
                
                while(!stk.empty() && stk.top()!='[')
                {
                    ss = stk.top() + ss;
                    stk.pop();
                }
                
                stk.pop();// '[' deleting this charcter from stack
                string num="";
                while(!stk.empty() && isdigit(stk.top()))
                {
                    num = stk.top() + num;
                    stk.pop();
                }
                
                int val = stoi(num);
                
                
                while(val--)
                {
                    for(int j=0;j<ss.size();j++)
                    {
                        stk.push(ss[j]);
                    }
                }
            }
        }
        
        string ans="";
        
        while(!stk.empty())
        {
            ans = stk.top() + ans;
            stk.pop();
        }
        return ans;
    }
};