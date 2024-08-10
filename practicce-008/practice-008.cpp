#include <stdio.h>

/**
 * Calculate S(n) = 1/2 + 3/4 + 5/6 + ... + (2n + 1)/(2n + 2)
 * Only using while loop.
 */
int main() {
	double s = 0;
	int n;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	while (n >= 0) {
		s += (2.0 * n + 1) / (2 * n + 2);
		--n;
	}

	printf("S(n) = %.4f", s);

	return 0;
}
