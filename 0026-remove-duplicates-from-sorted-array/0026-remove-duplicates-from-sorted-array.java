class Solution {
    public int removeDuplicates(int[] nums) {
        int k;
        Set<Integer> set = new LinkedHashSet<>();
        for(int i : nums ){
            set.add(i);
        }
        k=set.size();
        Integer[] uniqueNums = set.toArray(new Integer[0]);
        for (int i = 0; i < uniqueNums.length; i++) {
            nums[i] = uniqueNums[i];
        }
        return k;
    }
}