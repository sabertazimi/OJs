class Solution {
public:
    int leastBricks(vector< vector<int> > &wall) {
        unordered_map<int, int> edges;
        auto res = wall.size();

        for (auto row : wall) {
            for (auto i = 0, width = 0; i < row.size() - 1; i++) {
                edges[width += row[i]]++;
                res = min(res, wall.size() - edges[width]);
            }
        }

        return res;
    }
};
