#include <stdio.h>

/**
 * List all the "divisors" of the positive integer n.
 * Only using while loop.
 */
int main() {
	int n;

	printf("List all the \"divisors\" of the positive integer n.\n\n");

	printf("Enter value of n: ");
	scanf_s("%d", &n);

	if (n < 1) {
		printf("n invalid.");
		return 0;
	}

	int i = 1;

	while (i <= n) {
		if (n % i == 0) {
			printf("%d\t", i);
		}
		++i;
	}

	return 0;
}
