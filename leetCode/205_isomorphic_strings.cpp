class Solution {
public:
	bool isIsomorphic(string s, string t) {
		int m1[256] = { 0 };
		int m2[256] = { 0 };

		for(int i = 0; s[i] != 0 && t[i] != 0; ++i){
			if(m1[s[i]] != m2[t[i]]) {
				return false;
			}

			m1[s[i]] = m2[t[i]] = -i - 1;
		}
		
		return true;
	}
};
