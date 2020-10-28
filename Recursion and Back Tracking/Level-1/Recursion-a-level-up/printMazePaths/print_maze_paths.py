import sys

def printMazePath(rows, cols, r_ind, c_ind, path):
    if r_ind == rows-1 and c_ind == cols-1:
        print(path, end=' ')
    else:
        if 0 <= r_ind < rows and 0 <= c_ind < cols:
            # Horizontal move
            printMazePath(rows, cols, r_ind, c_ind+1, path+'h')
            # Vertical move
            printMazePath(rows, cols, r_ind+1, c_ind, path+'v')


if __name__ == '__main__':
    try:
        n, m = int(sys.argv[1]), int(sys.argv[2])
    except IndexError:
        print('Invalid input. Script requires two input')
    except ValueError:
        print('Input two integers.')

    printMazePath(n, m, 0, 0, '')