/*!
 * \file max_rectangle.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector < int >arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int max = 0;
	int area = 0;
	int j, k;

	for (int i = 0; i < n; i++) {
		for (j = i - 1; j > -1 && arr[j] >= arr[i]; j--) ;
		for (k = i + 1; k < n && arr[k] >= arr[i]; k++) ;
		j++;
		k--;
		area = arr[i] * (k - j + 1);

		if (max < area) {
			max = area;
		}
	}

	cout << max;

	return 0;
}
