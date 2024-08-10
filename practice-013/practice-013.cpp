#include <stdio.h>

/*
 * Calculate S(n) = x^2 + x^4 + ... + x^2n
 * Only using while loop
 */
int main() {
	double x;
	int n;

	printf("S(n) = x^2 + x^4 + ... + x^2n\n\n");
	printf("Enter value of x:");
	scanf_s("%lf", &x);

	printf("Enter value of n:");
	scanf_s("%d", &n);

	double s = 0, t = 1;
	int i = 1;

	while (i <= n) {
		t *= x * x;
		s += t;
		++i;
	}

	printf("S(n) = %.4lf", s);
	
	return 0;
}
