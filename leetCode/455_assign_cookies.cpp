class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int res = 0;
        int trav = 0;
        int gl = g.size();
        int sl = s.size();

        while (res < gl && trav < sl) {
            if (g[res] <= s[trav]) {
                ++res;
            }

            ++trav;
        }

        return res;
    }
};
