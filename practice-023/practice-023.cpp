#include <stdio.h>

/**
 * Count the number of divisors of the positive integer n.
 * Only using while loop.
 */
int main() {
	int c = 0, n;

	printf("Count the number of divisors of the positive integer n\n\n");

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	int i = 1;

	while (i <= n) {
		if (n % i == 0) {
			++c;
		}
		++i;
	}

	printf("C(n) = %d", c);

	return 0;
}