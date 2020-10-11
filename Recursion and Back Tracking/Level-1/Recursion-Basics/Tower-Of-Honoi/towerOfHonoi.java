import java.io.*;
import java.util.*;

public class towerOfHonoi {

    public static void main(String[] args) throws Exception {
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int t1= sc.nextInt();
        int t2= sc.nextInt();
        int t3= sc.nextInt();
        
        toh(n, t1, t2, t3);
    }

    public static void toh(int n, int t1id, int t2id, int t3id){
        if(n==0){
            return;
        }
        toh(n-1, t1id, t3id, t2id);
        System.out.println(n+"["+t1id+" -> "+t2id+"]");
        toh(n-1, t3id, t2id, t1id);
    }

}