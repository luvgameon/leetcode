class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
            vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int a=nums[i];
            if(m.count(target-a)==0)
            {
                m[a]=i;
            }
            else{
                v.push_back(m[(target-a)]);
                v.push_back(i);
                
                
            }

        
        }
        return v;
    }
    
};