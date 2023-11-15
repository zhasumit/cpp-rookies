class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        row = set()
        col = set()

        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    row.add(i)
                    col.add(j)

        # take row marker and make the matrix[i][j] as zero
        for i in row:
            for j in range(len(matrix[0])):
                matrix[i][j] = 0

        # take col marker and make the matrix[i][j] as zero
        for j in col:
            for i in range(len(matrix)):
                matrix[i][j] = 0