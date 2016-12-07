/*!
 * \file ISBN.cc
 * \brief NO2
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string isbn;
	getline(cin, isbn);

	int multi = 1;
	int sum = 0;

	for (int i = 0; i < (int)isbn.length() - 1; i++) {
		if (isbn[i] != '-') {
			sum += (multi++) * (isbn[i] - '0');
		}
	}

	int code = sum % 11;

	if (code == 10) {
		if (isbn[12] == 'X') {
			cout << "Right";
		} else {
			isbn[12] = 'X';
			cout << isbn;
		}
	} else {
		if (isbn[12] == code + '0') {
			cout << "Right";
		} else {
			isbn[12] = code + '0';
			cout << isbn;
		}
	}
	return 0;
}
