#include <stdio.h>

/**
 * Calculate S(n) = 1 + x^2/2! + x^4/4! + ... + (x^2n)/(2n)!
 * Only using while loop.
 */
int main() {
	double x;
	int n;

	printf("S(n) = 1 + x^2/2! + x^4/4! + ... + (x^2n)/(2n)!\n\n");

	printf("Enter value of x: ");
	scanf_s("%lf", &x);

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	double s = 1, t = 1;
	long m = 1;
	int i = 1;

	while (i <= n) {
		t *= x * x;
		m *= (2 * i - 1) * 2 * i;
		s += 1.0 * t / m;
		++i;
	}

	printf("S(n) = %.4lf", s);

	return 0;
}
