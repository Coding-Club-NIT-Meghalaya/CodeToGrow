import java.io.*;
import java.util.*;

public class maxInArray {
    public static void main(String[] args) throws Exception {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] =sc.nextInt();
        }
        
        int max= maxOfArray(arr, arr.length-1);
        System.out.println(max);
     }
 
     public static int maxOfArray(int[] arr, int idx){
         if(idx==-1){
             return Integer.MIN_VALUE;
         }
         
         int max= Math.max(maxOfArray(arr, idx-1) , arr[idx]);
         
         return max;
     }
}
