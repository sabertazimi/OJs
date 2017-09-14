#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int dp[1000][1000];

int strtoint(char *str, int lo, int hi) {
	int ret = 0;

	for (int i = lo; i <= hi; ++i) {
		ret = ret * 10 + str[i-1] - '0';
	}

	return ret;
}

int main(void) {
	int n = 0;
	scanf("%d", &n);

	while (n) {
		memset(dp, 0, 1000*1000);
		char expr[80];
		int nr_plus = 0;

		scanf("%s", expr);
		scanf("%d", &nr_plus);

		int len = strlen(expr);

		for (int i = 1; i < len + 1; ++i) {
			dp[i][0] = strtoint(expr, 1, i);
		}

		for (int i = 1; i < len + 1; ++i) {
			for (int j = i; j < nr_plus; ++j) {
				dp[i][j] = INT_MAX;
			}
		}

		// dp[i][j] = min(dp[k][j-1] + strtoint(expr, k+1, i))

		for (int i = 2; i < len + 1; ++i) {
			for (int j = 1; j < i; ++j) {
    			int min = INT_MAX;

    			for (int k = j; k < i; ++k) {
    				int cur = dp[k][j - 1] + strtoint(expr, k + 1, i);
    				if (min > cur) {
    					min = cur;
    				}
    			}

    			dp[i][j] = min;
			}
		}

		printf("%d\n", dp[len][nr_plus]);

		--n;
	}
}