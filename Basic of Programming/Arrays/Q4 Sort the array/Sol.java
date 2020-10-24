/*
 * You are given an array of length n which only contains the elements 0,1 and 2.
 * You are supposed to sort the array in ascending order without the use of any sorting algorithms. Minimize time complexity.
 * 
 * Input Format:
 * The first line of input contains the value of n i.e. size of array.
 * The next line contains n space separated integers, each representing an element of the array (0/1/2)
 * 
 * Output Format:
 * Print the sorted array as n space separated integers.
 * 
 * Constraints:
 * All array elements and n are within integer value limits.
 * 
 * Example input:
 * 8
 * 1 0 2 1 2 1 0 0
 * 
 * Example output:
 * 0 0 0 1 1 1 2 2
 * 
 * Explanation:
 * There are 3 zeroes, 3 ones and 2 twos. Sorted array is printed as space separated integers.
 * 
 *********************************************************************************************************************/

//Solution presented here has a time complexity of O(n) and uses a hashmap.


import java.util.*;

public class Sol {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] array = new int[n];
		
		for(int i=0; i<n; i++)
			array[i] = sc.nextInt();
		
		//Actual solution begins here. Hashmap used to maintain a count of 0s, 1s and 2s in the array.
		HashMap<Integer, Integer> map = new HashMap<>();
		map.put(0,0);
		map.put(1,0);
		map.put(2,0);
		
		for(int i=0; i<n; i++)
		{
			int number = array[i];
			int count = map.get(number);
			count++;
			map.replace(number, count);
		}
		
		//Sort array
		int i = 0, arrayIndex = 0;
		int count = map.get(0);
		for(i=0; i<count; i++)
		{
			array[arrayIndex] = 0;
			arrayIndex++;
		}
		count = map.get(1);
		for(i=0; i<count; i++)
		{
			array[arrayIndex] = 1;
			arrayIndex++;
		}
		count = map.get(2);
		for(i=0; i<count; i++)
		{
			array[arrayIndex] = 2;
			arrayIndex++;
		}
		
		//Print sorted array
		for(i=0; i<n; i++)
			System.out.print(String.valueOf(array[i]) + " ");
	}

}
