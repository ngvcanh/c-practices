#include <stdio.h>
#include <math.h>

/**
 * Calculate S(n) = sqrt(2 + sqrt(2 + ... + sqrt(2 + sqrt(2)))) with n square root signs.
 * Only using while loop.
 */
int main() {
	int n;

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("S(n) = 0");
		return 0;
	}

	double s = sqrt(2);

	while (n > 1) {
		s = sqrt(2 + s);
		--n;
	}

	printf("S(n) = %.4f", s);

	return 0;
}
