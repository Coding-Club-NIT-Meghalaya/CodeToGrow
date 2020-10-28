import sys

def process_input():
    n = int(sys.argv[1])
    arr = []
    for i in range(n):
        arr.append(int(sys.argv[2+i]))
    return (arr, n)


def maxOfArray(arr, n ):    
    def helper(ind, mVal):
        if ind > n-1:
            return mVal
        if arr[ind] > mVal:
            mVal = arr[ind]
        return helper(ind+1, mVal)

    return helper(0, float('-inf'))


if __name__ == '__main__':
    arr, n = process_input()
    max_val = maxOfArray(arr, n)
    print(max_val)
