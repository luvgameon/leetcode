class MinStack {
public:
    stack<int> s;
    stack<int> st;
    int mini;
    
    MinStack() {
        mini = INT_MAX;
    }
    
    void push(int val) {
        
        s.push(val);
        mini = min(mini,val);
        st.push(mini);
    }
    
    void pop() {
        
        s.pop();
        st.pop();
        
        if(!st.empty() && st.top()!=mini)
            mini = st.top();
        
         if(st.empty())
             mini = INT_MAX;
    }
    
    int top() {
        
        return s.top();
    }
    
    int getMin() {
        
        return st.top();
    }
};