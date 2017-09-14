#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	char ans[32];
	int len;

	while (scanf("%d", &n) != EOF) {
		len = 0;

		while (n) {
			int num = n % 8;
			ans[len] = num + '0';
			n /= 8;
			++len;
		}

		if (len > 0) {
			for (int i = len - 1; i >= 0; --i) {
				printf("%c", ans[i]);
			}
			printf("\n");
		} else {
			printf("0\n");
		}
	}
	return 0;
}