class MyQueue {
    stack<int>s1;
        stack<int>s2;
    int p;
    
public:
    MyQueue() {
        stack<int>s1;
        stack<int>s2;
        int p;
    }
    
    void push(int x) {
        
       while(!s1.empty()){
           s2.push(s1.top());
            s1.pop();
        }
       s1.push(x);
         while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
            
    }
    
    int pop() {
        int ans=-1;
        if(!s1.empty()){
            ans=s1.top();
            s1.pop();
            
        }
        return ans;
    }
        
    
    int peek() {
       
        if(!s1.empty()){
             return s1.top();

        }
    return -1;
        
    }
    
    bool empty() {
        if(s1.empty())return true;
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */