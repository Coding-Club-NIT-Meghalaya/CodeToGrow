'''
You are given an array of length n which only contains the elements 0,1 and 2.
You are supposed to sort the array in ascending order without the use of any sorting algorithms. Minimize time complexity.
 
Input Format:
The first line of input contains the value of n i.e. size of array.
The next line contains n space separated integers, each representing an element of the array (0/1/2)
 
Output Format:
Print the sorted array as n space separated integers.
 
Constraints:
All array elements and n are within integer value limits.
 
Example input:
8
1 0 2 1 2 1 0 0

Example output:
[0, 0, 0, 1, 1, 1, 2, 2]
 
Explanation:
There are 3 zeroes, 3 ones and 2 twos. Sorted array is printed as space separated integers.
 
 *********************************************************************************************************************
'''

#Solution presented here has a time complexity of O(n) and uses a dictionary

def arraySort(n, array):
    mappings = {0:0, 1:0, 2:0}
    for element in array:
        count = mappings.get(element)
        count = count+1
        mappings.update({element:count})

    arrayIndex = 0
    count = mappings.get(0)
    for i in range(0, count):
        array[arrayIndex]=0
        arrayIndex = arrayIndex+1

    count = mappings.get(1)
    for i in range(0, count):
        array[arrayIndex]=1
        arrayIndex = arrayIndex+1

    count = mappings.get(2)
    for i in range(0, count):
        array[arrayIndex]=2
        arrayIndex = arrayIndex+1
    return array

#Take input and call the function
n = int(input())
array = [int(item) for item in input().split(' ')]   
array = arraySort(n, array)
print(array)
        
    
