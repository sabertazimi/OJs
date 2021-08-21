/*!
 * \file adjacent.cc
 * \brief No.1
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	vector < int >arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i + 1] - arr[i] == 1) {
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
