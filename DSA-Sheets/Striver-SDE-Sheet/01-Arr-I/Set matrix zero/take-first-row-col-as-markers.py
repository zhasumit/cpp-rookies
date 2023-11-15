class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        ROWS, COLS = len(matrix), len(matrix[0])
        rowZero = False

        # check for 0s in the matrix and mark them 
        for row in range(ROWS):
            for col in range(COLS):
                if matrix[row][col] == 0:
                    # make the first row and col 0
                    matrix[0][col] = 0
                    #  for row it is diff row>0 only allowed
                    if row > 0:
                        matrix[row][0] = 0
                    else: 
                        rowZero = True

        # skip the first row (marker)
        for row in range(1, ROWS):
            for col in range(1, COLS):
                if matrix[0][col] == 0 or matrix[row][0] == 0:
                    matrix[row][col] = 0
        
        # check for marker rows 
        # matrix[0][0] is marker for first col => taken first 
        if matrix[0][0] == 0:
            # make first col zero
            for row in range(ROWS):
                matrix[row][0] = 0


        # rowZero is marker for first row => to be seen at last 
        if rowZero:
            for col in range(COLS):
                matrix[0][col] = 0