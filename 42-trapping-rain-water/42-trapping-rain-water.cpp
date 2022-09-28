class Solution {
public:
    int trap(vector<int>& arr) {
         stack<int>s;
        long long int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && arr[i]>arr[s.top()])
            {
                
              long long int top=s.top();
               s.pop();
               if(s.empty())break;
               long long int distance=(i-s.top()-1);
               long long int height=min(arr[i],arr[s.top()])-arr[top];
               ans+=height*distance;
                
                
            }
            s.push(i);
            
        }
        return ans;
    }
        // code here
};