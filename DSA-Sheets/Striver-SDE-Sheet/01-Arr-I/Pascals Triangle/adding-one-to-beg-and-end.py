class Solution:
    def generate(self, n: int) -> List[List[int]]:
        if n == 1:
            return [[1]]
        if n == 2:
            return [[1], [1,1]]
        
        ans = [[1], [1,1]]

        # find the rows for the remaining n rows 
        for i in range(2, n):
            curr = []
            
            # last row is i-1 and add j and j+1 of last row
            for j in range(i-1):
                curr.append(ans[i-1][j]  + ans[i-1][j+1])
            ans.append([1] + curr + [1])

        return ans