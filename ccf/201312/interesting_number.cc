/*!
 * \file interesting_number.cc
 * \brief No.4 数位 DP 问题
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>

using namespace std;

int dp[1001][16] = { 0 };

const int prime = 1000000007;

int main(void)
{
	int n;
	cin >> n;

	// 对于数位的第 0 位, 
	dp[0][0] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 16; j++) {
			if (dp[i][j] == 0) {
				continue;
			}
			if ((j & 2) == 0 && i != 0) {
				dp[i + 1][j | 1] =
				    (dp[i + 1][j | 1] + dp[i][j]) % prime;
			}

			dp[i + 1][j | 2] =
			    (dp[i + 1][j | 2] + dp[i][j]) % prime;

			if ((j & 8) == 0) {
				dp[i + 1][j | 4] =
				    (dp[i + 1][j | 4] + dp[i][j]) % prime;
			}

			dp[i + 1][j | 8] =
			    (dp[i + 1][j | 8] + dp[i][j]) % prime;
		}
	}

	cout << dp[n][15] << endl;
}
