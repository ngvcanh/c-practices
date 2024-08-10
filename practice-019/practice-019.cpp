#include <stdio.h>

/**
 * Calculate S(n) = 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!
 * Only using while loop.
 */
int main() {
	double x;
	int n;

	printf("S(n) = 1 + x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)!\n\n");

	printf("Enter value of x: ");
	scanf_s("%lf", &x);

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	double s = 1, t = x;
	long m = 1;
	int i = 0;

	while (i <= n) {
		if (i > 0) {
			t *= x * x;
			m *= 2 * i * (2 * i + 1);
		}

		s += 1.0 * t / m;
		++i;
	}

	printf("S(n) = %.4lf", s);

	return 0;
}
