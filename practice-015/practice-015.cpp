#include <stdio.h>

/**
 * Calculate S(n) = 1/1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ... + 1/ (1 + 2 + 3 + ... + n)
 * Only using while loop.
 */
int main() {
	int n;

	printf("S(n) = 1/1 + 1/(1 + 2) + 1/ (1 + 2 + 3) + ... + 1/ (1 + 2 + 3 + ... + n)\n\n");

	printf("Enter value of n:");
	scanf_s("%d", &n);

	double s = 0;
	int t = 0, i = 1;

	while (i <= n) {
		t += i;
		s += 1.0 / t;
		++i;
	}

	printf("S(n) = %.4lf", s);

	return 0;
}