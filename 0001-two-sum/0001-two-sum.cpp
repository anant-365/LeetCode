class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> hashtable;
        int rem = 0;
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            rem = target-nums[i];
            if(hashtable.find(rem)!=hashtable.end()){
                arr.push_back(hashtable[rem]);
                arr.push_back(i);
            }
            hashtable[nums[i]] = i;
        }
        return arr;
    }
};