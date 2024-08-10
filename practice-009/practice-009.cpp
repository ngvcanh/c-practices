#include <stdio.h>

/**
 * Calculate S(n) = 1 x 2 x 3 x ... x n
 * Only using while loop.
 */
int main() {
	int s = 0;
	int n;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	if (n > 0) {
		s = 1;
	}

	while (n > 0) {
		printf("x %d\n", n);
		s *= n;
		--n;
	}

	printf("S(n) = %d", s);

	return 0;
}
