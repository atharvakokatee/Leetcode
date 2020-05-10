// faster than 29.43%

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        if(target > nums[nums.size()-1]) return nums.size();
        else if(target < nums[0]) return 0;
        while(r>=l){
            int mid = l + (r-l)/2;
            if(nums[mid]==target || (nums[mid]>target && nums[mid-1]<target))
                return mid;
            else if(nums[mid]<target)
                l = mid+1;
            else
                r = mid-1; 
        }
        return -1;
    }
};
