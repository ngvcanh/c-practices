#include <stdio.h>

/**
 * Calculate S(n) = x + x^2/2! + x^3/3! + ... + x^n/n!
 * Only using while loop.
 */
int main() {
	double x;
	int n;

	printf("S(n) = x + x^2/2! + x^3/3! + ... + x^n/n!\n\n");

	printf("Enter value of x: ");
	scanf_s("%lf", &x);

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	double s = 0;
	long t = 1, m = 1;
	int i = 1;

	while (i <= n) {
		t *= x;
		m *= i;
		s += 1.0 * t / m;
		++i;
	}

	printf("S(n) = %.4lf", s);

	return 0;
}
