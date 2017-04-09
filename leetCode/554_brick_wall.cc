class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        vector< map<int, bool> > space;

        int n = wall.size();

        if (n == 0) {
            return 0;
        }

        int m = wall[0].size();

        if (m == 0) {
            return 0;
        }

        int maxWidth = 0;
        for (int i = 0; i < m; i++) {
            maxWidth += wall[0][i];
        }

        for (int i = 0; i < n; i++) {
            int width = 0;
            space.push_back(map<int, bool>());
            space[i][width] = false;

            for (int j = 0; j < m - 1; j++) {
                width += wall[i][j];
                space[i][width] = true;
            }
        }

        int res = n;
        for (int j = 1; j < maxWidth; j++) {
            int cur = 0;
            for (int i = 0; i < n; i++) {
                if (space[i].find(j) == space[i].end()) {
                    cur++;
                }
            }

            res = min(res, cur);
        }

        return res;
    }
};
