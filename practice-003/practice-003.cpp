#include <stdio.h>

/**
 * Calculate S(n) = 1 + 1/2 + 1/3 + … + 1/n
 * Only using while loop
 */
int main() {
	double s = 0;
	int n = 0;

	while (n < 1) {
		printf("Enter value of n:");
		scanf_s("%d", &n);

		if (n < 1) {
			printf("Value of n (%d) must be greater than 0.\n", n);
		}
	}

	while (n > 0) {
		s += 1.0 / n;
		--n;
	}

	printf("S(n) = %.4f", s);

	return 0;
}