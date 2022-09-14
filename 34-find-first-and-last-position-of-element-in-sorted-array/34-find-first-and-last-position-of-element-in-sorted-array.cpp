class Solution {
public:
    int First(vector<int>& nums, int target)
    {
       int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        
    while(s<=e)
    {
        if(nums[mid]==target)
        {
            ans=mid;
            e=mid-1;

        }
         else if(nums[mid]<target){
             s=mid+1;
         }

        else{
            e=mid-1;
        }
    
    mid=s+(e-s)/2;
    }
        return ans;
}
    
       int Second(vector<int>& nums, int target)
    {
       int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans=-1;
        
    while(s<=e)
    {
        if(nums[mid]==target)
        {
            ans=mid;
            s=mid+1;

        }
         else if(nums[mid]<target){
             s=mid+1;
         }

        else{
            e=mid-1;
        }
    
    mid=s+(e-s)/2;
    }
        return ans;
}
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        vector<int>v;
       v.push_back(First(nums,target));
        v.push_back(Second(nums,target));
        return v;
       
       
    }
};