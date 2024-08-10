#include <stdio.h>

/**
 * Calculate S(n) = x + x^3 + x^5 + ... + x^(2n + 1)
 * Only using while loop.
 */
int main() {
	double x;
	int n;

	printf("S(n) = x + x^3 + x^5 + ... + x^(2n + 1)\n\n");
	
	printf("Enter value of x:");
	scanf_s("%lf", &x);

	printf("Enter value of n:");
	scanf_s("%d", &n);

	int i = 0;
	double s = 0, t = x;

	while (i <= n) {

		if (i > 0) {
			t *= x * x;
		}

		s += t;
		++i;
	}

	printf("S(n) = %.4lf", s);

	return 0;
}
