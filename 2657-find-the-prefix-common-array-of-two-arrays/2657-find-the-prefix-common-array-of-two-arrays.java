class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int [] output=new int[A.length];
        Set<Integer> setA = new HashSet<>();
        Set<Integer> setB = new HashSet<>();
        for(int i=0;i<A.length;i++){
            setA.add(A[i]);
            setB.add(B[i]);
            Set<Integer> set = new HashSet(setA);
            set.retainAll(setB);
            output[i]=set.size();
        }
        return output;
    }
}