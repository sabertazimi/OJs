/*!
 * \file fraction_counting.cc
 * \brief No.1
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>

using namespace std;

int vec[1000];

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}

	int res = 0;

	for (int i = 1; i < N - 1; i++) {
		if (vec[i - 1] < vec[i] && vec[i + 1] < vec[i]
		    || vec[i - 1] > vec[i]
		    && vec[i + 1] > vec[i]) {
			res++;
		}
	}

	cout << res << endl;

	return 0;
}
