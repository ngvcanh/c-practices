#include <stdio.h>

/**
 * Calculate the product of all the "odd divisors" of the positive integer n.
 * Only using while loop.
 */
int main() {
	int n, t = 0;

	printf("Calculate the product of all the \"odd divisors\" of the positive integer n.\n\n");

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	if (n > 0) {
		t = 1;
	}

	int i = 1;

	while (i <= n) {
		if (n % i == 0 && i % 2 == 1) {
			t *= i;
		}
		++i;
	}

	printf("T(n) = %d", t);

	return 0;
}
