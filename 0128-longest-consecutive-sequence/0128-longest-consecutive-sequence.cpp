class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longestStreak = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (numSet.find(nums[i] - 1) == numSet.end()) {
            int currentNum = nums[i];
            int currentStreak = 1;
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum += 1;
                currentStreak += 1;
            }
            longestStreak = max(longestStreak, currentStreak);
        }
    }
       return longestStreak;
    }
};