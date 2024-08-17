#include <stdio.h>

/**
 * Given a positive integer n. Check whether n is a perfect number.
 * Only using while loop.
 */
int main() {
	int n;

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	if (n <= 1) {
		printf("%d is not a perfect number.", n);
		return 0;
	}

	int i = n / 2, s = 0;

	while (i >= 1) {
		if (n % i == 0) {
			s += i;
		}
		--i;
	}

	if (s == n) {
		printf("%d is a perfect number.", n);
		return 0;
	}

	printf("%d is not a perfect number.", n);

	return 0;
}
