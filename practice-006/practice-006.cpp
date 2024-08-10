#include <stdio.h>

/**
 * Calculate S(n) = 1/1x2 + 1/2x3 + ... + 1/n x (n + 1)
 * Only using while loop.
 */
int main() {
	double s = 0;
	int n = 0;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	while (n > 0) {
		s += 1.0 / (n * (n + 1));
		--n;
	}

	printf("S(n) = %.4f", s);

	return 0;
}
