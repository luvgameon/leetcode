class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;

        }
        int mx=0;
        
        for(auto i:m)
        {
            
            if(i.first==i.second && i.second>mx)
            {
                mx=i.second;
                
            }
        }
        if(mx)
            return mx;
        else{
        return -1;
    
        }
                
    }
};