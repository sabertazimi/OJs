class Solution {
public:
    string reverseWords(string s) {
        vector<string> strs = split(s, ' ');
        int n = strs.size();
        string res = "";
        string rev = "";

        if (n == 0) {
            return res;
        }

        for (int i = 0; i < n - 1; i++) {
            reverse(strs[i].begin(), strs[i].end());
            res += (strs[i] + " ");
        }

        reverse(strs[n-1].begin(), strs[n-1].end());
        res += strs[n-1];

        return res;
    }

private:
    vector<string> split(const std::string &s, char delim) {
        vector<string> elems;
        stringstream ss;
        ss.str(s);
        string item;

        while (getline(ss, item, delim)) {
            elems.push_back(item);
        }

        return elems;
    }
};
