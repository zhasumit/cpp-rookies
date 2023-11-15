class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        # The first row for reult
        result = [[1]]

        # make the second rows and consecutive n-1 rows 
        for i in range(numRows - 1):
            # appending 0's at start and end to 
            last_row = [0] + result[-1] + [0]
            curr_row = []

            # making the CURRENT row 
            # length of prev row + 1 
            for j in range(len(result[-1]) + 1):
                curr_row.append(last_row[j] + last_row[j+1])
            result.append(curr_row)
        
        return result