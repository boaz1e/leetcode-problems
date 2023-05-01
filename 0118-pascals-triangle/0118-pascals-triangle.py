class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 1:
            return [[1]]
        if numRows == 2:
            return [[1], [1,1]]
        else:
            ans = [[1], [1,1]]
            for i in range(2,numRows):
                new_row = [1]
                for j in range(len(ans[-1])-1):
                    new_row.append(ans[-1][j]+ans[-1][j+1])
                    
                new_row.append(1)
                ans.append(new_row)

        return ans






