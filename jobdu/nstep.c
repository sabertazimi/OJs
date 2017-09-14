#include <stdio.h>
#include <stdlib.h>


int main(void) {
    long long int ans[100];
	ans[0] = 1;
	ans[1] = 1;

	for (int i = 2; i < 90; ++i) {
		ans[i] = ans[i-2] + ans[i-1];
	}

	int n = 0;

	while (scanf("%d", &n) != EOF) {
		printf("%lld\n", ans[n]);
	}
	return 0;
}