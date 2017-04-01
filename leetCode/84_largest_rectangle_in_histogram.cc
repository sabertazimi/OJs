class Solution {
public:
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

        // brute-force algorithm
        // for (int i = 0; i < size; i++) {
        //     int height = heights[i];

        //     for (int j = i; j < size; j++) {
        //         height = min(height, heights[j]);
        //         res = max(res, height * (j - i + 1));
        //     }
        // }

        return res;
    }
};
