class Solution {
    public int findMaxK(int[] nums) {
        Arrays.sort(nums);
        int maxK = -1;
        int left = 0;
        int right = nums.length - 1;
        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == 0) {
                maxK = Math.max(maxK, Math.abs(nums[left]));
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
        return maxK;
    }
}
