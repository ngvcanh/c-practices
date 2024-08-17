#include <stdio.h>
#include <math.h>

/**
 * Given a positive integer n. Check whether n is a prime number.
 * Only using while loop and math.h.
 */

int main() {
	int n;

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	if (n <= 1) {
		printf("%d is not a prime number.", n);
		return 0;
	}

	if (n <= 3) {
		printf("%d is a prime number.", n);
		return 0;
	}

	int i = sqrt(n);

	while (i >= 2) {
		if (n % i == 0) {
			printf("%d is not a prime number.", n);
			return 0;
		}
		--i;
	}

	printf("%d is a prime number.", n);
	
	return 0;
}
