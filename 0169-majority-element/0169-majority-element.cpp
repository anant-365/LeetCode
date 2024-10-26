class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = nums[0];
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
            if(count==0 && i<(nums.size()-1)){
                element = nums[i+1];
            }
        }
        count = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]==element){
                count++;
                if(count>(nums.size()/2)){
                    return element;
                }
            }
            
        }
        return -1;
    }
};