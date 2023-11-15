class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        m = len(matrix)
        n = len(matrix[0])

        # traverse matrix in range m and n
        for i in range(m):
            for j in range(n):
                # if zero found => mark row/col as -999
                if matrix[i][j] == 0:
                    # mark cols
                    # m: #rows traverse all changing rows
                    for row in range(m):
                        if matrix[row][j] != 0:
                            matrix[row][j] = -999

                    # mark rows 
                    # m: #cols traverse all changing cols
                    for col in range(n):
                        if matrix[i][col] != 0:
                            matrix[i][col] = -999

        # again traverse the entire matrix and make -999 as 0
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == -999:
                    matrix[i][j] = 0