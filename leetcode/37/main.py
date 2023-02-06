class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            hasNumsRow = [0] * 9
            hasNumsColumn = [0] * 9
            hasNumsChunk = [0] * 9

            for j in range(9):
                if board[i][j] != '.':
                    hasNumsRow[ord(board[i][j]) - ord('0') - 1] += 1
                
                if board[j][i] != '.':
                    hasNumsColumn[ord(board[j][i]) - ord('0') - 1] += 1
                
                y = j % 3 + i % 3 * 3
                x = j // 3 + i // 3 * 3
                if board[y][x] != '.':
                    hasNumsChunk[ord(board[y][x]) - ord('0') - 1] += 1
            
            for i in range(9):
                if hasNumsRow[i] > 1 or hasNumsColumn[i] > 1 or hasNumsChunk[i] > 1:
                    return False

        return True

