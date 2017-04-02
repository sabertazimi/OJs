struct compare {
    bool operator()(const string& first, const string& second) {
        return first.size() < second.size();
    }
};

bool isSubsequence(string &first, string &second, int m, int n) {
    if (n == 0) {
        return true;
    }

    if (m == 0) {
        return false;
    }

    if (first[m-1] == second[n-1]) {
        return isSubsequence(first, second, m - 1, n - 1);
    }

    return isSubsequence(first, second, m - 1, n);
}

class Solution {
public:
    int findLUSlength(vector<string>& strs) {
        compare comp;
        sort(strs.begin(), strs.end(), comp);
        int n = strs.size();

        int res = -1;

        for (int i = 0; i < n; i++) {
            bool uniq = true;
            for (int j = 0; j < n; j++) {
                if (i != j && (strs[i] == strs[j] || isSubsequence(strs[j], strs[i], strs[j].length(), strs[i].length()))) {
                    uniq = false;
                    break;
                }
            }
            if (uniq) {
                res = max(res, (int)strs[i].length());
            }
        }

        return res;
    }
};
