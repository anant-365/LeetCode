class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if (nums.size() == 1) return 0;  
        int max1 = nums[0];
        int index = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > max1) {
                max1 = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (i != index && max1 < 2 * nums[i]) {
                return -1;
            }
        }
        return index;
    }
};