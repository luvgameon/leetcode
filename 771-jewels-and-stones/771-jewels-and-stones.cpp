class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;
        int cnt=0;
        for(int i=0;i<stones.size();i++)
        {
            m[stones[i]]++;

        }
        
        for(auto i:m)
        {
            if(jewels.find(i.first) != std::string::npos)
            {
                cnt+=i.second;
                
                
            }
           
        }
        return cnt;
    }
};