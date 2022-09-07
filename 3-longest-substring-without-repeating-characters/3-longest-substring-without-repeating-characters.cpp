class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> win(256,0);
        int maxlen=0,left=0,right=0;
        while(right<s.size())
        {
            if(win[s[right]]==0)
            {
                
                win[s[right]]++;
                right++;
            }
            else{
                win[s[left]]=0;
                left++;
            }
            
       maxlen=max(maxlen,right-left);
        }
        
        return maxlen;
        
        
    }
};

 