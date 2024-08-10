#include <stdio.h>

/**
 * Calculate S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3...n
 * Only using while loop.
 */
int main() {
	long s = 0;
	int n;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	while (n > 0) {
		int i = 1;
		int sub = 1;

		while (i <= n) {
			sub *= i;
			++i;
		}

		s += sub;
		--n;
	}

	printf("S(n) = %ld", s);

	return 0;
}

/**
 * Because the term at the (n - 1)th position of the sum is multiplied by n 
 * at the nth position in the sum, we can approach the solution as follows: 
 */
 /*
int main() {
	long s = 0;
	int n;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	long t = 1;
	int i = 1;

	while (i <= n) {
		t *= i;
		s += t;
		++i;
	}

	printf("S(n) = %ld", s);

	return 0;
}
*/