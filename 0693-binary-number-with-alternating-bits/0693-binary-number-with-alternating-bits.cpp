class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool ans=true;
        while(n){
        int prev=n&1;
            int a=(n>>1)&1;
            if(prev^a==0)
            {
                  return false;
            }
            n=n>>1;
        
        
    }
        return ans;
    }
};