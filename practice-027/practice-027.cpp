#include <stdio.h>

/**
 * Count the number of "even divisors" of the positive integer n.
 * Only using while loop.
 */
int main() {
	int n;

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	int c = 0, i = 2;

	while (i <= n) {
		if (n % i == 0) {
			++c;
		}
		i += 2;
	}

	printf("C(n) = %d", c);

	return 0;
}
