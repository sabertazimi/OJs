/*!
 * \file kmp.cc
 * \brief No.3
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void match(string str, string key, bool sensitive)
{
	string tmp = str;

	if (!sensitive) {
		transform(str.begin(), str.end(), tmp.begin(),::tolower);
		transform(key.begin(), key.end(), key.begin(),::tolower);
	}

	if (tmp.find(key) != string::npos) {
		cout << str << endl;
	}
}

int main(void)
{
	string key, str;
	bool sensitive;
	int n;

	cin >> key >> sensitive >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		match(str, key, sensitive);
	}

	return 0;
}
