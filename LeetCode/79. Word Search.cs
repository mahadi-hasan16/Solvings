public class Solution {
    public int[][] direction = new int[4][] {
        new int[] {-1, 0},  // up
        new int[] {1, 0},   // down
        new int[] {0, 1},   // right
        new int[] {0, -1}   // left
    };

    bool IsOutOfBoundary(int r, int c, int m, int n) {
        return r < 0 || r >= m || c < 0 || c >= n;
    }

    bool IsPossible(char[][] board, int r, int c, int index, string word, bool[][] visited) {
        if (index == word.Length) {
            return true;
        }
        
        if (IsOutOfBoundary(r, c, board.Length, board[0].Length) || 
            visited[r][c] || 
            board[r][c] != word[index]) {
            return false;
        }

        visited[r][c] = true;

        foreach (var dir in direction) {
            if (IsPossible(board, r + dir[0], c + dir[1], index + 1, word, visited)) {
                return true;
            }
        }

        visited[r][c] = false;
        return false;
    }

    public bool Exist(char[][] board, string word) {
        int m = board.Length;
        int n = board[0].Length;
        
        bool[][] visited = new bool[m][];
        for (int i = 0; i < m; i++) {
            visited[i] = new bool[n];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (IsPossible(board, i, j, 0, word, visited)) {
                    return true;
                }
            }
        }

        return false;
    }
}
