import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner sc = new Scanner(System.in);
        int r1 = sc.nextInt();
        int c1 = sc.nextInt();
        int arr1[][] = new int[r1][c1];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                arr1[i][j] = sc.nextInt();
            }
        }

        int r2 = sc.nextInt();
        int c2 = sc.nextInt();
        int arr2[][] = new int[r2][c2];
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                arr2[i][j] = sc.nextInt();
            }
        }
        
        int ans[][]= new int[r1][c2];
        if(c1!=r2){
            System.out.println("Invalid input");
            return;
        }else{
            for(int i=0; i<ans.length; i++){
                for(int j=0; j<ans[i].length; j++){
                    for(int k=0; k<c1; k++){
                        ans[i][j] += arr1[i][k]*arr2[k][j];
                    }
                    
                }
            }
        }
        
        for(int i=0; i<ans.length; i++){
                for(int j=0; j<ans[i].length; j++){
                    System.out.print(ans[i][j]+" ");
                }
                System.out.println();
            }


    }

}