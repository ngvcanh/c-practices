#include <stdio.h>

/**
 * Calculate S(n) = 1^2 + 2^2 + � + n^2
 * Only using while loop
 */
int main() {
	int s = 0;
	int n;

	printf("Enter value of n:");
	scanf_s("%d", &n);

	int i = 1;

	while (i <= n) {
		s += (i * i);
		++i;
	}

	printf("S(n) = %d", s);

	return 0;
}