class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix)

        # iterate matrix 
        for i in range(n):
            for j in range(i,n):
                # transpose the matrix 
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

            # reverse the matrix 
            matrix[i].reverse()