#include <stdio.h>

/**
 * Calculate S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + ... + x^n/(1 + 2 + 3 + ... + n)
 * Only using while loop.
 */
int main() {
	double x;
	int n;

	printf("S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + ... + x^n/(1 + 2 + 3 + ... + n)\n\n");

	printf("Enter value of x:");
	scanf_s("%lf", &x);

	printf("Enter value of n:");
	scanf_s("%d", &n);

	double s = 0;
	long t = 1;
	int m = 0, i = 1;

	while (i <= n) {
		t *= x;
		m += i;
		s += 1.0 * t / m;
		++i;
	}

	printf("S(n) = %.4lf", s);

	return 0;
}
