class Solution {
    public int maxProduct(int[] nums) {
        int index=-1;
        int num1=0;
        int num2=0;
        int result=0;
        for(int i = 0;i<nums.length; i++){
            if(nums[i]>num1){
                num1=nums[i];
                index = i;
            }
        }
        for(int i = 0;i<nums.length; i++){
            if(nums[i]>num2 && i!=index){
                num2=nums[i];
            }
        }
        result = (num1-1) * (num2-1);
        return result;
    }
}