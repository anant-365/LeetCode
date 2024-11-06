class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;
        if(nums.size() == 1) return 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums.size() == 2) {
            return find(nums.begin(), nums.end(), max(nums[0], nums[1])) - nums.begin();
        }

        else if (mid == 0) {
            if (nums[mid] > nums[mid + 1]) return mid;
        } 
        else if (mid == nums.size() - 1) {
            if (nums[mid] > nums[mid - 1]) return mid;
        }
        else if (nums[mid - 1] < nums[mid] && nums[mid + 1] < nums[mid]) {
            return mid;
        } 
        else if (nums[mid - 1] < nums[mid] && nums[mid + 1] > nums[mid]) {
            low = mid + 1;
        } 
        else {
            high = mid;
        }
    }
    return 0;
    }
};