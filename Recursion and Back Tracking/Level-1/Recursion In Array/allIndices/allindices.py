import sys

def process_input():
    n = int(sys.argv[1])
    arr = []
    for i in range(n):
        arr.append(int(sys.argv[2+i]))
    target = int(sys.argv[-1])
    return (arr, n, target)


def getIndices(arr, n , target):
    res = []
    def helper(ind):
        if ind > n-1:
            return
        if arr[ind] == target:
            res.append(ind)
        return helper(ind+1)
    helper(0)
    return res if res else [-1]


if __name__ == '__main__':
    arr, n, target = process_input()
    result = getIndices(arr, n, target)
    for ind in result:
        print(ind, end = ' ')
