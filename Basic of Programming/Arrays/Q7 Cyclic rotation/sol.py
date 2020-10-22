'''
You are given an array of length n.
You are supposed to cyclically left rotate the array by 1 element.
 
Input Format:
The first line of input contains the value of n i.e. size of array.
The next line contains n space separated integers, each representing an element of the array.
 
Output Format:
Print the left rotated array.
 
Constraints:
All array elements and n are within integer value limits.
 
Example input:
8
1 2 3 4 5 6 7 8

Example output:
[2, 3, 4, 5, 6, 7, 8, 1]
 
Explanation:
The array is cyclically rotated left by 1 element. 
 
*********************************************************************************************************************
'''

def leftRotate(array):
    element = array[0]
    del(array[0])
    array.append(element)
    return array

'''
For right rotation of array

def rightRotate(array):
    element = array[-1]
    del(array[-1])
    array.insert(0,element)
    return array
'''

#Take input and call left rotate funtion
n = int(input())
array = [int(item) for item in input().split(' ')]

array = leftRotate(array)
print(array)
