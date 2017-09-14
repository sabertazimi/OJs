#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0;

	while (scanf("%d", &n) != EOF) {
		int pow = n * n;
		int flag = 1;

		while (n) {
			int nn = n % 10;
			int powpow = pow % 10;

			if (nn != powpow) {
				flag = 0;
				break;
			}

			n /= 10;
			pow /= 10;
		}

		if (flag) {
			printf("Yes!\n");
		} else {
			printf("No!\n");
		}
	}
}