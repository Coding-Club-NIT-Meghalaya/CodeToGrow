import sys

def process_input():
    n, n1, n2, n3 = int(sys.argv[1]), sys.argv[2], sys.argv[3], sys.argv[4]
    return (n, n1, n2, n3)


def toh(n, src, dst, aux):
    if n == 1:
        print("{0}[{1} -> {2}]".format(str(n), src, dst), end=' ')
    else:
        toh(n-1, src, aux, dst)
        print("{0}[{1} -> {2}]".format(str(n), src, dst), end = ' ')
        toh(n-1, aux, dst, src)


if __name__ == '__main__':
    n, n1, n2, n3 = process_input()
    toh(n, n1, n2, n3)