#include <stdio.h>

/**
 * Calculate T(x, n) = x^n
 * Only using while loop.
 */
int main() {
	double x;
	int n;

	printf("Enter value of x:");
	scanf_s("%lf", &x);

	printf("Enter value of n:");
	scanf_s("%d", &n);

	double t = 1;

	while (n > 0) {
		t *= x;
		--n;
	}

	printf("T(x, n) = %.4f", t);

	return 0;
}