class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> copy = nums;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++){
            rotate(nums.begin(), nums.begin() + i, nums.end());
            if(nums==copy){
                return true;
            }
            rotate(nums.begin(), nums.begin() + (n - i), nums.end());
        }
        return false;
    }
};