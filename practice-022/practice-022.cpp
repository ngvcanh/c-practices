#include <stdio.h>

/**
 * Calculate the product of all the "divisors" of the positive integer n.
 * Only using while loop.
 */
int main() {
	int t = 0, n;

	printf("Calculate the product of all the \"divisors\" of the positive integer n.\n\n");

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	int i = 1;

	if (n > 0) {
		t = 1;
	}

	while (i <= n) {
		if (n % i == 0) {
			t *= i;
		}
		++i;
	}

	printf("T(n) = %d", t);
	
	return 0;
}
