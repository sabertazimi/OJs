class Solution {
public:
    int maximalRectangle(vector < vector<char> >& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }

        int m = matrix.size();
        int n = matrix[0].size();

        vector < vector<int> > heights(m, vector<int>(n, 0));

        // use dp to calculate heights of m hitograms
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n ; j++) {
                if (matrix[i][j] == '0') {
                    heights[i][j];
                } else {
                    heights[i][j] = (i == 0) ? 1 : (heights[i-1][j] + 1);
                }
            }
        }

        int res = 0;
        for (int i = 0; i < m; i++) {
            res = max(res, largestRectangleArea(heights[i]));
        }

        return res;
    }
private:
    int largestRectangleArea(vector<int>& heights) {
        heights.insert(heights.begin(), 0);
        heights.push_back(0);

        int res = 0;
        int size = heights.size();

        if (size == 2) {
            return res;
        }

        stack<int> s;
        s.push(0);

        for (int i = 1, idx = 0; i < size; i++) {
            while (heights[i] < heights[idx = s.top()]) {
                s.pop();
                // 1(l-low) 5 6 2(r-low), i = 2 => res = 5 * (3 - 0 - 1);
                res = max(res, heights[idx] * (i - s.top() - 1));
            }

            s.push(i);
        }

        heights.erase(heights.begin());
        heights.pop_back();

        return res;
    }
};
