import sys

def pzz(n):
    if n == 0:
        return
    
    for i in range(2):
        print(n, end=' ')
        pzz(n-1)
    print(n, end=' ')

    
if __name__ == '__main__':
    n = int(sys.argv[1])
    pzz(n)