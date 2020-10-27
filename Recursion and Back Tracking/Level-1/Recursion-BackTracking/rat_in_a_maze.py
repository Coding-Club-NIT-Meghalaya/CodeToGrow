import sys

def getMaze():
    m, n = int(sys.argv[1]), int(sys.argv[2])
    k = 3
    maze = [[0 for _ in range(n)] for _ in range(m)]
    for i in range(m):
        for j in range(n):
            maze[i][j] = int(sys.argv[k])
            k += 1
    
    return maze, m, n


def mazehelper(row, col, m_rows, m_cols, maze, result, soFar):
    if row == m_rows-1 and col == m_cols-1:
        soFar[row* m_cols + col] = 1
        result.append(soFar[:])
        soFar[row*m_cols + col] = 0
        return

    if 0 <= row < m_rows and 0 <= col < m_cols:
        # Backtrack if we encounter obstacle or if cell is already visited
        if (maze[row][col] == 0) or (soFar[row*m_cols + col] == 1):
            return

        soFar[row*m_cols + col] = 1
        # Move right
        mazehelper(row, col+1, m_rows, m_cols, maze, result, soFar)
        # Move left
        mazehelper(row, col-1, m_rows, m_cols, maze, result, soFar)
        # Move up
        mazehelper(row+1, col, m_rows, m_cols, maze, result, soFar)
        # Move down
        mazehelper(row-1, col, m_rows, m_cols, maze, result, soFar)
        soFar[row*m_cols + col] = 0
        

if __name__ == '__main__':
    maze, m, n = getMaze()
    # result tracks all valid paths
    res = []
    # soFar tracks individual paths through the maze
    soFar = [0] * (m * n)
    mazehelper(0, 0, m, n, maze, res, soFar)

    for val in res:
       for v in val:
           print(v, end=' ')
    
