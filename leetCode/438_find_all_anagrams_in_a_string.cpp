class Solution {
public:
	vector<int> findAnagrams(string s, string p) {
		vector<int> pv(26,0);
		vector<int> sv(26,0);
		vector<int> res;

		if (s.size() < p.size()) {
			return res;
		}

		for(int i = 0; i < p.size(); ++i) {
			++pv[p[i]-'a'];
			++sv[s[i]-'a'];
		}

		if (pv == sv) {
			res.push_back(0);
		}

		for (int i = p.size(); i < s.size(); ++i) {
			++sv[s[i]-'a'];
			--sv[s[i-p.size()]-'a']; 

			if(pv == sv) {
				res.push_back(i-p.size()+1);
			}
		}

		return res;
	}

//////////////////// TLE ////////////////////
// public:
//     vector<int> findAnagrams(string s, string p) {
//     	vector<int> res;

//     	for (int i = 0; i < s.size(); ++i) {
//     		if (isAnagram(s.substr(i, p.size()), p)) {
//     			res.push_back(i);
//     		}
//     	}

//     	return res;
//     }
// private:
// 	bool isAnagram(string s, string t) {
// 		sort(s.begin(), s.end());
// 		sort(t.begin(), t.end());
// 		return s == t;
// 	}
//////////////////// TLE ////////////////////

};
