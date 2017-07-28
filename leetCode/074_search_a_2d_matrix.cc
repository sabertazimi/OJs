class Solution {
public:
    bool searchMatrix(vector< vector<int> >& matrix, int target) {
        int m = matrix.size();

        if (m == 0) {
            return false;
        }

        int n = matrix[0].size();

        if (n == 0) {
            return false;
        }

        int row = 0;
        int col = n - 1;

        while ((0 <= row && row <= m - 1) && (0 <= col && col <= n - 1)) {
            if (target == matrix[row][col]) {
                return true;
            } else if (target < matrix[row][col]) {
                col--;
            } else {
                row++;
            }
        }

        return false;
    }
};
