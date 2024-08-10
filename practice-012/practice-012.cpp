#include <stdio.h>

/**
 * Calculate S(n) = x + x^2 + x^3 + ... + x^n
 * Only using while loop.
 */
int main() {
	double x;
	int n;

	printf("Enter value of x:");
	scanf_s("%lf", &x);

	printf("Enter value of n:");
	scanf_s("%d", &n);

	double s = 0, t = 1;
	int i = 1;

	while (i <= n) {
		t *= x;
		s += t;
		++i;
	}

	printf("S(n) = %.4f", s);

	return 0;
}