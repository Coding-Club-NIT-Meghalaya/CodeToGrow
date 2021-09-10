import java.util.*;
class Sol{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Input numbers seperated by space");
        String sin = sc.nextLine();
        String arr[] = sin.trim().split(" ");
        int intArr[] = new int[arr.length];
        int i = 0;
        for (String s : arr){
            intArr[i] = Integer.parseInt(s);
            i++;
        }

        int res[] = reverseArray(intArr);

        for (int r : res)
            System.out.print(r + " ");
    }

    private static int[] reverseArray(int[] intArr) {
        int m = intArr.length /2 ;

        for (int i = 0; i <= m ; i++){
            int temp = intArr[i];
            intArr[i] = intArr[intArr.length - i - 1];
            intArr[intArr.length - i - 1] = temp;
        }
        return intArr;
    }


}