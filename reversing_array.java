package java_questions;

import java.util.Arrays;

public class reversing_array {
    public static void main(String[] args) {
        System.out.println(Arrays.toString(reversingRow(new int[]{1,2,3,4,5,6})));
    }
    static int[] reversingRow(int[] arr){
        int temp=0;
        for(int i=0; i<arr.length/2; i++){
            temp=arr[i];
            arr[i]=arr[arr.length-1-i];
            arr[arr.length-1-i]=temp;
        }
        return arr;
    }
}
