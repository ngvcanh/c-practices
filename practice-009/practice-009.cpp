#include <stdio.h>

/**
 * Calculate T(n) = 1 x 2 x 3 x ... x n
 * Only using while loop.
 */
int main() {
	int t = 0;
	int n;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	if (n > 0) {
		t = 1;
	}

	while (n > 0) {
		t *= n;
		--n;
	}

	printf("T(n) = %d", t);

	return 0;
}
