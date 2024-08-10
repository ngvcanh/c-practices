#include <stdio.h>

/**
 * Calculate S(n) = 1/2 + 2/3 + 3/4 + ... + n / (n + 1)
 * Only using while loop.
 */
int main() {
	double s = 0;
	int n = 0;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	while (n > 0) {
		s += n / (n + 1.0);
		--n;
	}

	printf("S(n) = %.4f", s);


	return 0;
}
