class Solution {
public:
            int findPeakElement(vector<int>& arr) {
       int s=0,e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
           if(arr[mid]<arr[mid+1])
           {
               s=mid+1; // chec
           }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
        
        
    }
};
        