arr = list(map(int,input("Input Numbers Seperated by space\n").strip().split(" ")))

for i in range(0, len(arr)//2 - 1):
    temp = arr[i]
    arr[i] = arr[len(arr)-i-1]
    arr[len(arr)-i-1] = temp

print(arr)