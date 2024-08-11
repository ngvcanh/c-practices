#include <stdio.h>

/**
 * Calculate the sum of all the "even divisors" of the positive integer n.
 * Only using while loop.
 */
int main() {
	int n;

	printf("Calculate the sum of all the \"even divisors\" of the positive integer n.\n\n");

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	int s = 0, i = 1;

	while (i <= n) {
		if (n % i == 0 && i % 2 == 0) {
			s += i;
		}
		++i;
	}

	printf("S(n) = %d", s);

	return 0;
}