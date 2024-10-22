class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> myset;
        int j = 0;
        for(int i=0; i<nums.size(); i++){
            myset.insert(nums[i]);
        }
        for(int element : myset){
            nums[j] = element;
            j++;
        }
        return myset.size();
    }
};