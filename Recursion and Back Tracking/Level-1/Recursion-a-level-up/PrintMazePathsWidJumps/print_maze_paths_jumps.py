import sys
cache = set()
def printMazePath(rows, cols, r_ind, c_ind, path):
    if r_ind == rows-1 and c_ind == cols-1:
        if path not in cache:
            print(path, end=' ')
        cache.add(path)
    else:
        if 0<= r_ind < rows and 0<= c_ind < cols:
            for i in range(1, rows):
                for j in range(1, cols):
                    printMazePath(rows, cols, r_ind, c_ind+j, path+'h'+str(j))
                    printMazePath(rows, cols, r_ind+i, c_ind, path+'v'+str(i))
                    if i==j:
                        printMazePath(rows, cols, r_ind+i, c_ind+i, path+'d'+str(i))


if __name__ == '__main__':
    try:
        n, m = int(sys.argv[1]), int(sys.argv[2])
    except IndexError:
        print('Invalid input. Script requires two input')
    except ValueError:
        print('Input two integers.')

    printMazePath(n, m, 0, 0, '')