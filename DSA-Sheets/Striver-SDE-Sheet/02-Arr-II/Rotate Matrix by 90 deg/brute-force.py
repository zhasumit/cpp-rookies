class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix) # getting #rows 
        rotated = [[0 for _ in range(n)] for _ in range(n)] # make list of list
        for i in range(n):
            for j in range(n):
                rotated[j][n-i-1] = matrix[i][j]
        return rotated