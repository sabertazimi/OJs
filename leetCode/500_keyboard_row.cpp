class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    	unordered_set<char> row1 {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    	unordered_set<char> row2 {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    	unordered_set<char> row3 {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    	vector<unordered_set<char>> rows {row1, row2, row3};
    	vector<string> ret;

    	for (int i = 0; i < words.size(); ++i) {

    		int nr_row = 0;
    		for (nr_row = 0; nr_row < 3; ++nr_row) {
    			if (rows[nr_row].count(tolower(words[i][0])) > 0) {
    				break;
    			}
    		}

    		ret.push_back(words[i]);

    		for (int j = 1; j < words[i].size(); ++j) {
    			if (rows[nr_row].count(tolower(words[i][j])) == 0) {
    				ret.pop_back();
    				break;
    			}
    		}
    	}

    	return ret;
    }
};
