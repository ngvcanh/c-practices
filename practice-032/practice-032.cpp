#include <stdio.h>
#include <math.h>

/**
 * Given a positive integer n. Check whether n is a perfect square.
 * Only using math.h.
 */
int main() {
	int n;

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	if (n <= 0) {
		printf("%d does not meet the requirement.", n);
		return 0;
	}

	int t = sqrt(n);

	if (t * t == n) {
		printf("%d is a perfect square.", n);
		return 0;
	}

	printf("%d is not a perfect square.", n);

	return 0;
}
