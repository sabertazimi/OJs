class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);

        while (area % w != 0) {
            --w;
        }

        vector<int> res;
        res.push_back(area / w);
        res.push_back(w);

        return res;
    }
};
