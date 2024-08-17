#include <stdio.h>

/**
 * Find the largest odd divisor of the positive integer n. For example, if n = 100, the largest odd divisor is 25.
 * Only using while loop.
 */
int main() {
	int n;

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	if (n > 0 && n % 2 == 1) {
		printf("UC = %d", n);
		return 0;
	}

	int i = n / 2, r = 0;

	while (i >= 1) {
		if (n % i == 0 && i % 2 == 1) {
			r = i;
			break;
		}
		--i;
	}

	printf("UC = %d", r);

	return 0;
}
