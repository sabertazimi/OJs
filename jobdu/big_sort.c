#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n;
char buf[1003];

int big_cmp(char *a, char *b) {
	int an = strlen(a);
	int bn = strlen(b);

	if (an > bn) {
		return 1;
	} else if (an < bn) {
		return -1;
	} else {
		for (int i = 0; i < an; ++i) {
			if (a[i] > b[i]) {
				return 1;
			} else if (a[i] < b[i]) {
				return -1;
			}
		}
	}

	return 0;
}

void big_sort(char **nums) {
	for (int i = 0; i < n - 1; ++i) {
     	int min = i;

		for (int j = i; j < n; ++j) {
			if (big_cmp(nums[min], nums[j]) > 0) {
				min = j;
			}
		}

		if (min != i) {
			char *tmp = nums[min];
			nums[min] = nums[i];
			nums[i] = tmp;
		}
	}
}

int main(void) {
	while (scanf("%d", &n) != EOF) {
		char ** nums = (char **)malloc(n * sizeof(char *));

		for (int i = 0; i < n; ++i) {
			scanf("%s", buf);
			nums[i] = (char *)malloc((strlen(buf) + 3) * sizeof(char));
			strncpy(nums[i], buf, strlen(buf));
			nums[i][strlen(buf)] = '\0';
		}

		big_sort(nums);

		for (int i = 0; i < n; ++i) {
			printf("%s\n", nums[i]);
			free(nums[i]);
		}

		free(nums);
	}

	return 0;
}