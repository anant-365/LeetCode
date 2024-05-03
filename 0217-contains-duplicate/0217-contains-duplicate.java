import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
class Solution {
    public boolean containsDuplicate(int[] nums) {
         Set<Integer> a = new HashSet<Integer>(); 
         for (int num : nums) {
             a.add(num);
         }
         if(a.size() != nums.length){
             return true;
         }
        return false;
    }
}