class Solution {
public:
	bool isValid(string s) {
		// int len = static_cast<int>(s.length());

		// if (len % 2) {
		// 	return false;
		// }

		stack<char> stk;

		for (char& c : s) {
			switch (c) {
				case '(': 
    				// fall through
				case '{': 
    				// fall through
				case '[':
					stk.push(c);
					break;
				case ')':
					if (stk.empty() || stk.top() != '(') {
						return false;
					} else {
						stk.pop();
						break;
					}
				case '}':
					if (stk.empty() || stk.top() != '{') {
						return false;
					} else {
						stk.pop();
						break;
					}
				case ']':
					if (stk.empty() || stk.top() != '[') {
						return false;
					} else {
						stk.pop();
						break;
					}
				default:
					;
			}
		}

		return stk.empty();
	}
};
