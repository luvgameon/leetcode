class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(((mid==0) ||arr[mid]>arr[mid-1]) && ((mid==arr.size()-1) || arr[mid]>arr[mid+1]))
            {
                return mid;
            }
            else if(mid!=0 && arr[mid]<arr[mid-1])
            {
                e=mid-1;
                
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return mid;
        
        
    }
};