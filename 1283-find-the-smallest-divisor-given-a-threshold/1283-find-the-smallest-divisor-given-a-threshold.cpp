class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        auto computeSum = [&](int divisor) {
            int sum = 0;
            for (int i = 0; i < nums.size(); i++) {
                sum += (nums[i] + divisor - 1) / divisor; 
            }
            return sum;
        };
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            int sum = computeSum(mid);
            
            if (sum <= threshold) {
                high = mid; 
            } else {
                low = mid + 1;
            }
        }
        
        return low; 
    }
};