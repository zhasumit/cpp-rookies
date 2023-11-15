class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        m = len(matrix)
        n = len(matrix[0])

        # make 2 lists to keep track of making row/col zero
        row_marking = [False] * m
        col_marking = [False] * n
        
        # iterate matrix rowwise and check for zeros 
        for row in range(m):
            for col in range(n):
                if matrix[row][col] == 0:
                    # take marking as True for zeroes
                    row_marking[row] = True
                    col_marking[col] = True

        # Traverse matrix again and look for marking
        for row in range(m):
            for col in range(n):
                # if marking found => mark that point as 0
                if row_marking[row] or col_marking[col]:
                    matrix[row][col] = 0