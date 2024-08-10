#include <stdio.h>

/**
 * Calculate S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
 * Only using while loop.
 */
int main() {
	double s = 0;
	int n = 0;

	while (n < 1) {
		printf("Enter value of n:");
		scanf_s("%d", &n);

		if (n < 1) {
		}
	}

	while (n > 0) {
		s += 1.0 / (2 * n + 1);
		--n;
	}

	printf("S(n) = %.4f", s);

	return 0;
}
