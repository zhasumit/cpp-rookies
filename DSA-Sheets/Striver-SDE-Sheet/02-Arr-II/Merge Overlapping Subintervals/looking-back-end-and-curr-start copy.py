class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        # sort by the start value 
        intervals.sort(key = lambda i : i[0])
        ans = [intervals[0]]

        # since already added one interval start with 1th 
        for start, end in intervals[1:]:
            lastEnd = ans[-1][1]

            # if new interval
            if start > lastEnd:
                ans.append([start, end])

            # if overlapping (find max ending)
            else:
                ans[-1][1] = max(end, lastEnd)

        return ans