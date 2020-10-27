import sys


def printPermutations(ch_list, idx, soFar):    
    if idx == len(ch_list):
        print(soFar, end=' ')
    else:
        for i in range(idx, len(ch_list)):
            ch_list[idx], ch_list[i] = ch_list[i], ch_list[idx]
            printPermutations(ch_list, idx+1, soFar+ch_list[idx])
            ch_list[i], ch_list[idx] = ch_list[idx], ch_list[i]


if __name__ == '__main__':
    try:
        inp = sys.argv[1]
    except IndexError:
        print('Invalid input')
    # Convert string to the list of individual characters.
    ch_list = list(inp)
    printPermutations(ch_list, 0, '')