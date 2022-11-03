class Solution {
public:
    void merge(vector<int>& nums, int l, int m, int r){
    vector<int> tmp(r - l + 1);
    int i = l; // index for left subarray
    int j = m + 1; // index for right subarray
    int k = 0; // index for temporary array
    while(i <= m && j <= r){
        if(nums[i] <= nums[j]) tmp[k++] = nums[i++]; 
        else tmp[k++] = nums[j++];
    }
    while(i <= m) tmp[k++] = nums[i++];
    while(j <= r) tmp[k++] = nums[j++]; 
    for(i = 0; i < k; i++) nums[l + i] = tmp[i];
}

// mergeSort(nums, 0, nums.size() - 1);
void mergeSort(vector<int>& nums, int s, int e){
    if(s >= e) return;
    int mid = s + (e - s) / 2; //middle index, same as (l+r)/2
    mergeSort(nums, s, mid);
    mergeSort(nums, mid + 1, e);
    merge(nums, s, mid, e);
}
    vector<int> sortArray(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        mergeSort(nums,l,r);
        return nums;
        
    }
};