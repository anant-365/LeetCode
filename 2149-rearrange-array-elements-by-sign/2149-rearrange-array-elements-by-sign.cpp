class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int j=0; j<nums.size()/2; j++){
            if (!(((2 * j) > nums.size()) && ((2 * j + 1) > nums.size()))){
                nums[2*j]=pos[j];
                nums[2*j+1]=neg[j];
            }
        }
        return nums;
    }
};