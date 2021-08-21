/*!
 * \file cli.cc
 * \brief No.3
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

int main(void)
{
	string fmt;
	getline(cin, fmt);

	map < char, bool > argmp;

	char ch;
	for (int i = 0, len = fmt.length(); i < len; i++) {
		ch = fmt[i];

		if ((i + 1) < len && fmt[i + 1] == ':') {
			argmp[ch] = true;
			i++;	// skip followed ':' 
		} else {
			argmp[ch] = false;
		}
	}

	int n;
	cin >> n;
	getline(cin, fmt);	// skip '\n'

	vector < map < char, string > >out(n);
	map < char, string >::iterator it;
	map < char, bool >::iterator arit;
	string str;
	string param;

	for (int i = 0; i < n; i++) {

		getline(cin, fmt);
		stringstream ss(fmt);

		ss >> str;	// skip program name
		while (ss >> str) {
			if (str[0] != '-' || str.length() != 2)
				break;	// invalid flag

			if (str[0] == '-') {
				arit = argmp.find(str[1]);

				if (arit == argmp.end())
					break;	// invalid flag

				// no argument flag
				if (arit->second == false) {
					out[i][str[1]] = "\0";
				} else {
					// with argument flag
					ss >> param;
					out[i][str[1]] = param;
				}
			}
		}

	}

	for (int i = 0; i < n; i++) {
		cout << "Case " << i + 1 << ": ";

		for (it = out[i].begin(); it != out[i].end();) {
			if (it->second == "\0") {
				cout << "-" << it->first;
			} else {
				cout << "-" << it->first << " " << it->second;
			}

			it++;
			if (it != out[i].end()) {
				cout << " ";
			}
		}

		cout << endl;
	}

	return 0;
}
