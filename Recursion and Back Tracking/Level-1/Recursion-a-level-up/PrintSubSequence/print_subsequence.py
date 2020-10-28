import sys

def printSS(inp_str, idx, soFar):
    if idx == len(inp_str):
        print(soFar, end=' ')
    else:
        #include character in subsequence
        printSS(inp_str, idx+1, soFar+inp_str[idx])
        #exclude character in subsequence
        printSS(inp_str, idx+1, soFar)

if __name__ == '__main__':
    try:
        inp = sys.argv[1]
    except IndexError:
        print('Invalid input. Please pass a valid string.')

    printSS(inp, 0, '')