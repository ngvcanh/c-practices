#include <stdio.h>

/**
 * Given a positive integer n. Calculate the sum of its divisors that are smaller than itself.
 * Only using while loop.
 */
int main() {
	int n;

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	int i = 1, s = 0;

	while (i < n) {
		if (n % i == 0) {
			s += i;
		}
		++i;
	}

	printf("S(n) = %d", s);

	return 0;
}
