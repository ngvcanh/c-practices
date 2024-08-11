#include <stdio.h>

/**
 * Calculate the sum of all the "divisors" of the positive integer n.
 * Only using while loop.
 */
int main() {
	int s = 0, n;

	printf("Calculate the sum of all the \"divisors\" of the positive integer n.\n\n");

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	int i = 1;

	while (i <= n) {
		if (n % i == 0) {
			s += i;
		}
		++i;
	}

	printf("S = %d", s);

	return 0;
}
