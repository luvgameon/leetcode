class Solution {
public:
            int findPeakElement(vector<int>& nums) {
        int len = nums.size();
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while (low <= high)
              {
                     mid = low + (high - low) / 2;

                     if (((mid == 0) || (nums[mid] > nums[mid - 1])) && ((mid == len-1) || (nums[mid] > nums[mid + 1])))
                     {
                            break;
                     }
                     else if (mid != 0 && nums[mid] < nums[mid - 1])
                     {
                            high = mid - 1;
                     }
                     else
                     {
                            low = mid + 1;
                     }
              }
        return mid;
    }
};
        